; Auto-generated. Do not edit!


(cl:in-package hebiros-msg)


;//! \htmlinclude TrajectoryFeedback.msg.html

(cl:defclass <TrajectoryFeedback> (roslisp-msg-protocol:ros-message)
  ((percent_complete
    :reader percent_complete
    :initarg :percent_complete
    :type cl:float
    :initform 0.0))
)

(cl:defclass TrajectoryFeedback (<TrajectoryFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TrajectoryFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TrajectoryFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name hebiros-msg:<TrajectoryFeedback> is deprecated: use hebiros-msg:TrajectoryFeedback instead.")))

(cl:ensure-generic-function 'percent_complete-val :lambda-list '(m))
(cl:defmethod percent_complete-val ((m <TrajectoryFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hebiros-msg:percent_complete-val is deprecated.  Use hebiros-msg:percent_complete instead.")
  (percent_complete m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TrajectoryFeedback>) ostream)
  "Serializes a message object of type '<TrajectoryFeedback>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'percent_complete))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TrajectoryFeedback>) istream)
  "Deserializes a message object of type '<TrajectoryFeedback>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'percent_complete) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TrajectoryFeedback>)))
  "Returns string type for a message object of type '<TrajectoryFeedback>"
  "hebiros/TrajectoryFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TrajectoryFeedback)))
  "Returns string type for a message object of type 'TrajectoryFeedback"
  "hebiros/TrajectoryFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TrajectoryFeedback>)))
  "Returns md5sum for a message object of type '<TrajectoryFeedback>"
  "cc6abe8bc172f00995b2c3f53015f718")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TrajectoryFeedback)))
  "Returns md5sum for a message object of type 'TrajectoryFeedback"
  "cc6abe8bc172f00995b2c3f53015f718")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TrajectoryFeedback>)))
  "Returns full string definition for message of type '<TrajectoryFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%float64 percent_complete~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TrajectoryFeedback)))
  "Returns full string definition for message of type 'TrajectoryFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%float64 percent_complete~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TrajectoryFeedback>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TrajectoryFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'TrajectoryFeedback
    (cl:cons ':percent_complete (percent_complete msg))
))