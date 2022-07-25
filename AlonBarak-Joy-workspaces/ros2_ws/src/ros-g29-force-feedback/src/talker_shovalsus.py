#!/usr/bin/env python                                                                                                                 
import rospy2

from std_msgs.msg import String
from msg import ForceFeedback
master_deg = 1/900.0

def talker():
    rospy2.init_node('talker')
    pub = rospy2.Publisher('ff_target', ForceFeedback, queue_size=10)	# publish to the ff_target topic


    r = rospy2.Rate(0.1)	# in Hz
    while not rospy2.is_shutdown():                                                                                                
      g29msg = ForceFeedback()
      real_position = input("Enter Degree:")
      real_position = float(real_position) * master_deg
      g29msg.position = float(real_position)
      g29msg.torque = float(input("Enter Torque:"))
      rospy2.loginfo("g29msg")
      pub.publish(g29msg)
      #break                                                                                                                          
      r.sleep()

if __name__ == '__main__':
    try:
        talker()
    except rospy2.ROSInterruptException: pass