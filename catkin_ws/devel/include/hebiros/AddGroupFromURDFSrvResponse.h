// Generated by gencpp from file hebiros/AddGroupFromURDFSrvResponse.msg
// DO NOT EDIT!


#ifndef HEBIROS_MESSAGE_ADDGROUPFROMURDFSRVRESPONSE_H
#define HEBIROS_MESSAGE_ADDGROUPFROMURDFSRVRESPONSE_H


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
struct AddGroupFromURDFSrvResponse_
{
  typedef AddGroupFromURDFSrvResponse_<ContainerAllocator> Type;

  AddGroupFromURDFSrvResponse_()
    {
    }
  AddGroupFromURDFSrvResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::hebiros::AddGroupFromURDFSrvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hebiros::AddGroupFromURDFSrvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct AddGroupFromURDFSrvResponse_

typedef ::hebiros::AddGroupFromURDFSrvResponse_<std::allocator<void> > AddGroupFromURDFSrvResponse;

typedef boost::shared_ptr< ::hebiros::AddGroupFromURDFSrvResponse > AddGroupFromURDFSrvResponsePtr;
typedef boost::shared_ptr< ::hebiros::AddGroupFromURDFSrvResponse const> AddGroupFromURDFSrvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hebiros::AddGroupFromURDFSrvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hebiros::AddGroupFromURDFSrvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hebiros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'hebiros': ['/home/robot/catkin_ws/src/hebiros/hebiros/msg', '/home/robot/catkin_ws/devel/share/hebiros/msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hebiros::AddGroupFromURDFSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hebiros::AddGroupFromURDFSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hebiros::AddGroupFromURDFSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hebiros::AddGroupFromURDFSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hebiros::AddGroupFromURDFSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hebiros::AddGroupFromURDFSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hebiros::AddGroupFromURDFSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::hebiros::AddGroupFromURDFSrvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::hebiros::AddGroupFromURDFSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hebiros/AddGroupFromURDFSrvResponse";
  }

  static const char* value(const ::hebiros::AddGroupFromURDFSrvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hebiros::AddGroupFromURDFSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::hebiros::AddGroupFromURDFSrvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hebiros::AddGroupFromURDFSrvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddGroupFromURDFSrvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hebiros::AddGroupFromURDFSrvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::hebiros::AddGroupFromURDFSrvResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // HEBIROS_MESSAGE_ADDGROUPFROMURDFSRVRESPONSE_H