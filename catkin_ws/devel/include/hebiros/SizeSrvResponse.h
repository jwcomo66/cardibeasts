// Generated by gencpp from file hebiros/SizeSrvResponse.msg
// DO NOT EDIT!


#ifndef HEBIROS_MESSAGE_SIZESRVRESPONSE_H
#define HEBIROS_MESSAGE_SIZESRVRESPONSE_H


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
struct SizeSrvResponse_
{
  typedef SizeSrvResponse_<ContainerAllocator> Type;

  SizeSrvResponse_()
    : size(0)  {
    }
  SizeSrvResponse_(const ContainerAllocator& _alloc)
    : size(0)  {
  (void)_alloc;
    }



   typedef int32_t _size_type;
  _size_type size;





  typedef boost::shared_ptr< ::hebiros::SizeSrvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hebiros::SizeSrvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SizeSrvResponse_

typedef ::hebiros::SizeSrvResponse_<std::allocator<void> > SizeSrvResponse;

typedef boost::shared_ptr< ::hebiros::SizeSrvResponse > SizeSrvResponsePtr;
typedef boost::shared_ptr< ::hebiros::SizeSrvResponse const> SizeSrvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hebiros::SizeSrvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hebiros::SizeSrvResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::hebiros::SizeSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hebiros::SizeSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hebiros::SizeSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hebiros::SizeSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hebiros::SizeSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hebiros::SizeSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hebiros::SizeSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "97da5de9999c5ce84f539773c8d0b2a3";
  }

  static const char* value(const ::hebiros::SizeSrvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x97da5de9999c5ce8ULL;
  static const uint64_t static_value2 = 0x4f539773c8d0b2a3ULL;
};

template<class ContainerAllocator>
struct DataType< ::hebiros::SizeSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hebiros/SizeSrvResponse";
  }

  static const char* value(const ::hebiros::SizeSrvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hebiros::SizeSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 size\n"
"\n"
;
  }

  static const char* value(const ::hebiros::SizeSrvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hebiros::SizeSrvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.size);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SizeSrvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hebiros::SizeSrvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hebiros::SizeSrvResponse_<ContainerAllocator>& v)
  {
    s << indent << "size: ";
    Printer<int32_t>::stream(s, indent + "  ", v.size);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HEBIROS_MESSAGE_SIZESRVRESPONSE_H
