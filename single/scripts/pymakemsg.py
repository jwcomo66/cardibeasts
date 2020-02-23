#!/usr/bin/env python
#
#   pypickup.py
#
#   Continually (at 100Hz!) send commands to the robot, providing
#   implicit moves to goal locations - using a filter.
#
import sys
import rospy
import math
import rosbag
import time

from sensor_msgs.msg import JointState
from std_msgs.msg    import Float64, String
from opencv_apps.msg import FaceArrayStamped
from single.msg import Num
from threading import Lock
import os

if __name__ == "__main__":
    rospy.init_node('pymakemsg')

    # Create a publisher to send commands to the robot.  Add some time
    # for the subscriber to connect so we don't loose initial
    # messages.  Also initialize space for the message data.
    pub = rospy.Publisher('/goal', Num, queue_size=5)
    print("sending real first message")
    pub.publish(.3, .2, .4)
    time.sleep(1) 

    print("sending first message")
    pub.publish(.3, .2, .4)
    time.sleep(6)
    
    
    print("sending secod message")
    pub.publish(.3, .2, .15)
    time.sleep(8)
    
    print("sending third message")
    pub.publish(-1.0, -1.0, -1.0)
    time.sleep(4.5)
    
    print("sending fourth message")
    pub.publish(.3, .2, .28)
    time.sleep(3.5)

    print("sending fifth message")
    pub.publish(.28, .1, .15)
    time.sleep(4.5)
    
    print("sending sixth message")
    pub.publish(-2.0, -2.0, -2.0)
    time.sleep(3.5)
    
    print("sending seventh message")
    pub.publish(.3, 0.3, 0.4)
    time.sleep(3)
    

    a = '''

    os.system('pwd')
    os.system('rostopic pub /goal single/Num "x: 0.3 \ny: 0.2 \nz: 0.4"')
    time.sleep(3.5)
    os.system("^C")
    
    
    print("sending secod message")
    os.system('rostopic pub /goal single/Num "x: 0.3 \ny: 0.2 \nz: 0.15"')
    time.sleep(2)

    print("sending third message")
    os.system('rostopic pub /goal single/Num "x: -1.0 \ny: -1.0 \nz: -1.0"')
    time.sleep(2)
    
    print("sending fourth message")
    os.system('rostopic pub /goal single/Num "x: 0.2 \ny: .2 \nz: .25"')
    time.sleep(2)
    print("sending fifth message")
    os.system('rostopic pub /goal single/Num "x: 0.3 \ny: 0.1 \nz: .15"')
    time.sleep(2.5)

    print("sending sixth message")
    os.system('rostopic pub /goal single/Num "x: -2.0 \ny: -2.0 \nz: -2.0"')
    time.sleep(2)

    print("sending seventh message")
    os.system('rostopic pub /goal single/Num "x: 0.3 \ny: 0.2 \nz: 0.4"')
    time.sleep(2)
    '''

    

    

    
