import rclpy
from rclpy.node import Node

import keyboard  # Requires Super User (sudo -s)
# from cognata_sdk_ros2.msg import *
from cognata_sdk_ros2.msg import ROIAndDOGTOutput, GPSAdditionalData, VehicleMsg
from sensor_msgs.msg import NavSatFix
from geometry_msgs.msg import Twist
from std_msgs.msg import Float32
import numpy as np
from .controllerPID import PID
import matplotlib.pyplot as plt
import os
# TODO 1 - closing loop with PID on the distance to front car as well as y axis for staying in the lane
# TODO 2 - front car class

LANE_DIR = "src/python_publisher/python_publisher/submodules/lanes"
LANE_ID = int(os.environ["LANE_ID"])


class record_sub(Node):

    def __init__(self):
        super().__init__("record_sub")
        # copy this ya gever
        self.ego_car_pose_y_nav = NavSatFix()
        self.ego_car_pose_x_nav = NavSatFix()
        self.sub = self.create_subscription(
            NavSatFix, "cognataSDK/GPS/navsat/CognataGPS0002", self.GPScb_nav, 30)  # GPS Point listener
        # self.gps_listener = self.create_subscription(
        #     GPSAdditionalData, "/cognataSDK/GPS/info/CognataGPS0002", self.GPScb, 10)  # GPS Listener
        self.x_list = []
        self.y_list = []
        self.fig, self.ax = plt.subplots()

        # enviorment variable thet indiacte record or play
        self.env_action = os.getenv(key="ACTION", default="PLAY")
        print(self.env_action)

        # create lanes directory if it doesnt exist
        if not os.path.isdir(LANE_DIR):
            print("created lanes dir")
            os.mkdir(LANE_DIR)

        self.file_name = "{}/lane_{}".format(LANE_DIR, LANE_ID)
        if self.env_action == "RECORD":
            with open(self.file_name, "w"):
                pass

        if self.env_action == "PLAY":
            # play
            with open(self.file_name, "r+") as gps_path:
                # extract data from the path file
                print("reading from the file")
                lines = gps_path.readlines()
                for line in lines:
                    x, y = line.split(',')
                    self.x_list.append(float(x))
                    self.y_list.append(float(y))

    def GPScb_nav(self, msg: NavSatFix):
        if self.env_action == "RECORD":
            # RECORD SECTION
            self.ego_car_pose_x_nav = msg.longitude     # X
            self.ego_car_pose_y_nav = msg.latitude      # Y
            print("Longitude: ", self.ego_car_pose_x_nav)
            print("Latitude: ", self.ego_car_pose_y_nav)

            with open(self.file_name, "a") as gps_path:
                # write the data into the path file
                print("writing to the file")
                gps_path.write(str(self.ego_car_pose_x_nav) +
                               "," + str(self.ego_car_pose_y_nav) + '\n')

            # plot the current gps path
            self.ax.clear()
            self.x_list.append(self.ego_car_pose_x_nav)
            self.y_list.append(self.ego_car_pose_y_nav)
            self.ax.plot(self.x_list, self.y_list, "-r")
            self.ax.scatter(self.x_list, self.y_list)

            # plt.pause(0.001)

        else:
            # PLAY SECTION
            # plot the current location on the gps map
            self.ax.clear()
            self.ax.plot(self.x_list, self.y_list, "-r")
            self.ego_car_pose_x_nav = msg.longitude
            self.ego_car_pose_y_nav = msg.latitude
            print("Longitude: ", self.ego_car_pose_x_nav)
            print("Latitude: ", self.ego_car_pose_y_nav)
            self.ax.scatter([self.ego_car_pose_x_nav],
                            [self.ego_car_pose_y_nav])
            plt.pause(0.001)


def main(args=None):
    rclpy.init(args=args)

    rcc = record_sub()

    rclpy.spin(rcc)
    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    rcc.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
