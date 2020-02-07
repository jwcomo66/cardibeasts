;; Auto-generated. Do not edit!


(when (boundp 'hebiros::TrajectoryResult)
  (if (not (find-package "HEBIROS"))
    (make-package "HEBIROS"))
  (shadow 'TrajectoryResult (find-package "HEBIROS")))
(unless (find-package "HEBIROS::TRAJECTORYRESULT")
  (make-package "HEBIROS::TRAJECTORYRESULT"))

(in-package "ROS")
;;//! \htmlinclude TrajectoryResult.msg.html
(if (not (find-package "SENSOR_MSGS"))
  (ros::roseus-add-msgs "sensor_msgs"))


(defclass hebiros::TrajectoryResult
  :super ros::object
  :slots (_final_state ))

(defmethod hebiros::TrajectoryResult
  (:init
   (&key
    ((:final_state __final_state) (instance sensor_msgs::JointState :init))
    )
   (send-super :init)
   (setq _final_state __final_state)
   self)
  (:final_state
   (&rest __final_state)
   (if (keywordp (car __final_state))
       (send* _final_state __final_state)
     (progn
       (if __final_state (setq _final_state (car __final_state)))
       _final_state)))
  (:serialization-length
   ()
   (+
    ;; sensor_msgs/JointState _final_state
    (send _final_state :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; sensor_msgs/JointState _final_state
       (send _final_state :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; sensor_msgs/JointState _final_state
     (send _final_state :deserialize buf ptr-) (incf ptr- (send _final_state :serialization-length))
   ;;
   self)
  )

(setf (get hebiros::TrajectoryResult :md5sum-) "3a3e9cf7ffdaa0f66eaad67830e9b995")
(setf (get hebiros::TrajectoryResult :datatype-) "hebiros/TrajectoryResult")
(setf (get hebiros::TrajectoryResult :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
sensor_msgs/JointState final_state

================================================================================
MSG: sensor_msgs/JointState
# This is a message that holds data to describe the state of a set of torque controlled joints. 
#
# The state of each joint (revolute or prismatic) is defined by:
#  * the position of the joint (rad or m),
#  * the velocity of the joint (rad/s or m/s) and 
#  * the effort that is applied in the joint (Nm or N).
#
# Each joint is uniquely identified by its name
# The header specifies the time at which the joint states were recorded. All the joint states
# in one message have to be recorded at the same time.
#
# This message consists of a multiple arrays, one for each part of the joint state. 
# The goal is to make each of the fields optional. When e.g. your joints have no
# effort associated with them, you can leave the effort array empty. 
#
# All arrays in this message should have the same size, or be empty.
# This is the only way to uniquely associate the joint name with the correct
# states.


Header header

string[] name
float64[] position
float64[] velocity
float64[] effort

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

")



(provide :hebiros/TrajectoryResult "3a3e9cf7ffdaa0f66eaad67830e9b995")

