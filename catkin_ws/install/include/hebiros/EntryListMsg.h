// Generated by gencpp from file hebiros/EntryListMsg.msg
// DO NOT EDIT!


#ifndef HEBIROS_MESSAGE_ENTRYLISTMSG_H
#define HEBIROS_MESSAGE_ENTRYLISTMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <hebiros/EntryMsg.h>

namespace hebiros
{
template <class ContainerAllocator>
struct EntryListMsg_
{
  typedef EntryListMsg_<ContainerAllocator> Type;

  EntryListMsg_()
    : size(0)
    , entries()  {
    }
  EntryListMsg_(const ContainerAllocator& _alloc)
    : size(0)
    , entries(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _size_type;
  _size_type size;

   typedef std::vector< ::hebiros::EntryMsg_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::hebiros::EntryMsg_<ContainerAllocator> >::other >  _entries_type;
  _entries_type entries;





  typedef boost::shared_ptr< ::hebiros::EntryListMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hebiros::EntryListMsg_<ContainerAllocator> const> ConstPtr;

}; // struct EntryListMsg_

typedef ::hebiros::EntryListMsg_<std::allocator<void> > EntryListMsg;

typedef boost::shared_ptr< ::hebiros::EntryListMsg > EntryListMsgPtr;
typedef boost::shared_ptr< ::hebiros::EntryListMsg const> EntryListMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hebiros::EntryListMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hebiros::EntryListMsg_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::hebiros::EntryListMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hebiros::EntryListMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hebiros::EntryListMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hebiros::EntryListMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hebiros::EntryListMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hebiros::EntryListMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hebiros::EntryListMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ce4dffca09542f7d73eaedf72b9274c0";
  }

  static const char* value(const ::hebiros::EntryListMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xce4dffca09542f7dULL;
  static const uint64_t static_value2 = 0x73eaedf72b9274c0ULL;
};

template<class ContainerAllocator>
struct DataType< ::hebiros::EntryListMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hebiros/EntryListMsg";
  }

  static const char* value(const ::hebiros::EntryListMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hebiros::EntryListMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 size\n"
"hebiros/EntryMsg[] entries\n"
"\n"
"================================================================================\n"
"MSG: hebiros/EntryMsg\n"
"string name\n"
"string family\n"
"int64 mac_address\n"
;
  }

  static const char* value(const ::hebiros::EntryListMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hebiros::EntryListMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.size);
      stream.next(m.entries);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EntryListMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hebiros::EntryListMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hebiros::EntryListMsg_<ContainerAllocator>& v)
  {
    s << indent << "size: ";
    Printer<int32_t>::stream(s, indent + "  ", v.size);
    s << indent << "entries[]" << std::endl;
    for (size_t i = 0; i < v.entries.size(); ++i)
    {
      s << indent << "  entries[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::hebiros::EntryMsg_<ContainerAllocator> >::stream(s, indent + "    ", v.entries[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // HEBIROS_MESSAGE_ENTRYLISTMSG_H