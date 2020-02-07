// Generated by gencpp from file hebiros/ModelFkSrvRequest.msg
// DO NOT EDIT!


#ifndef HEBIROS_MESSAGE_MODELFKSRVREQUEST_H
#define HEBIROS_MESSAGE_MODELFKSRVREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hebiros
{
template <class ContainerAllocator>
struct ModelFkSrvRequest_
{
  typedef ModelFkSrvRequest_<ContainerAllocator> Type;

  ModelFkSrvRequest_()
    : positions()
    , frame_type(0)  {
    }
  ModelFkSrvRequest_(const ContainerAllocator& _alloc)
    : positions(_alloc)
    , frame_type(0)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _positions_type;
  _positions_type positions;

   typedef int32_t _frame_type_type;
  _frame_type_type frame_type;



  enum {
    FrameTypeCenterOfMass = 0,
    FrameTypeOutput = 1,
  };


  typedef boost::shared_ptr< ::hebiros::ModelFkSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hebiros::ModelFkSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ModelFkSrvRequest_

typedef ::hebiros::ModelFkSrvRequest_<std::allocator<void> > ModelFkSrvRequest;

typedef boost::shared_ptr< ::hebiros::ModelFkSrvRequest > ModelFkSrvRequestPtr;
typedef boost::shared_ptr< ::hebiros::ModelFkSrvRequest const> ModelFkSrvRequestConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hebiros::ModelFkSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hebiros::ModelFkSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hebiros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'hebiros': ['/home/robot/catkin_ws/src/hebiros/hebiros/msg', '/home/robot/catkin_ws/devel/share/hebiros/msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hebiros::ModelFkSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hebiros::ModelFkSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hebiros::ModelFkSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hebiros::ModelFkSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hebiros::ModelFkSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hebiros::ModelFkSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hebiros::ModelFkSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dd146385f1eb1d3268bc4b0516bec43a";
  }

  static const char* value(const ::hebiros::ModelFkSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdd146385f1eb1d32ULL;
  static const uint64_t static_value2 = 0x68bc4b0516bec43aULL;
};

template<class ContainerAllocator>
struct DataType< ::hebiros::ModelFkSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hebiros/ModelFkSrvRequest";
  }

  static const char* value(const ::hebiros::ModelFkSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hebiros::ModelFkSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 FrameTypeCenterOfMass = 0\n"
"int32 FrameTypeOutput = 1\n"
"float64[] positions\n"
"int32 frame_type\n"
;
  }

  static const char* value(const ::hebiros::ModelFkSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hebiros::ModelFkSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.positions);
      stream.next(m.frame_type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ModelFkSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hebiros::ModelFkSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hebiros::ModelFkSrvRequest_<ContainerAllocator>& v)
  {
    s << indent << "positions[]" << std::endl;
    for (size_t i = 0; i < v.positions.size(); ++i)
    {
      s << indent << "  positions[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.positions[i]);
    }
    s << indent << "frame_type: ";
    Printer<int32_t>::stream(s, indent + "  ", v.frame_type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HEBIROS_MESSAGE_MODELFKSRVREQUEST_H