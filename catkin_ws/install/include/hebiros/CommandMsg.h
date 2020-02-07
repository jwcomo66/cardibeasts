// Generated by gencpp from file hebiros/CommandMsg.msg
// DO NOT EDIT!


#ifndef HEBIROS_MESSAGE_COMMANDMSG_H
#define HEBIROS_MESSAGE_COMMANDMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <hebiros/SettingsMsg.h>

namespace hebiros
{
template <class ContainerAllocator>
struct CommandMsg_
{
  typedef CommandMsg_<ContainerAllocator> Type;

  CommandMsg_()
    : name()
    , position()
    , velocity()
    , effort()
    , settings()  {
    }
  CommandMsg_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , position(_alloc)
    , velocity(_alloc)
    , effort(_alloc)
    , settings(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _name_type;
  _name_type name;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _position_type;
  _position_type position;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _velocity_type;
  _velocity_type velocity;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _effort_type;
  _effort_type effort;

   typedef  ::hebiros::SettingsMsg_<ContainerAllocator>  _settings_type;
  _settings_type settings;





  typedef boost::shared_ptr< ::hebiros::CommandMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hebiros::CommandMsg_<ContainerAllocator> const> ConstPtr;

}; // struct CommandMsg_

typedef ::hebiros::CommandMsg_<std::allocator<void> > CommandMsg;

typedef boost::shared_ptr< ::hebiros::CommandMsg > CommandMsgPtr;
typedef boost::shared_ptr< ::hebiros::CommandMsg const> CommandMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hebiros::CommandMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hebiros::CommandMsg_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::hebiros::CommandMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hebiros::CommandMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hebiros::CommandMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hebiros::CommandMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hebiros::CommandMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hebiros::CommandMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hebiros::CommandMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bfeea03edefa65b3e88462912543b8b6";
  }

  static const char* value(const ::hebiros::CommandMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbfeea03edefa65b3ULL;
  static const uint64_t static_value2 = 0xe88462912543b8b6ULL;
};

template<class ContainerAllocator>
struct DataType< ::hebiros::CommandMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hebiros/CommandMsg";
  }

  static const char* value(const ::hebiros::CommandMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hebiros::CommandMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] name\n"
"float64[] position\n"
"float64[] velocity\n"
"float64[] effort\n"
"hebiros/SettingsMsg settings\n"
"\n"
"\n"
"================================================================================\n"
"MSG: hebiros/SettingsMsg\n"
"string[] name\n"
"bool[] save_current_settings\n"
"int8[] control_strategy\n"
"hebiros/PidGainsMsg position_gains\n"
"hebiros/PidGainsMsg velocity_gains\n"
"hebiros/PidGainsMsg effort_gains\n"
"\n"
"\n"
"================================================================================\n"
"MSG: hebiros/PidGainsMsg\n"
"string[] name\n"
"float64[] kp\n"
"float64[] ki\n"
"float64[] kd\n"
"float64[] feed_forward\n"
"float64[] dead_zone\n"
"float64[] i_clamp\n"
"float64[] punch\n"
"float64[] min_target\n"
"float64[] max_target\n"
"float64[] target_lowpass\n"
"float64[] min_output\n"
"float64[] max_output\n"
"float64[] output_lowpass\n"
"bool[] d_on_error\n"
"\n"
;
  }

  static const char* value(const ::hebiros::CommandMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hebiros::CommandMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.position);
      stream.next(m.velocity);
      stream.next(m.effort);
      stream.next(m.settings);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommandMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hebiros::CommandMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hebiros::CommandMsg_<ContainerAllocator>& v)
  {
    s << indent << "name[]" << std::endl;
    for (size_t i = 0; i < v.name.size(); ++i)
    {
      s << indent << "  name[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name[i]);
    }
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.position[i]);
    }
    s << indent << "velocity[]" << std::endl;
    for (size_t i = 0; i < v.velocity.size(); ++i)
    {
      s << indent << "  velocity[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.velocity[i]);
    }
    s << indent << "effort[]" << std::endl;
    for (size_t i = 0; i < v.effort.size(); ++i)
    {
      s << indent << "  effort[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.effort[i]);
    }
    s << indent << "settings: ";
    s << std::endl;
    Printer< ::hebiros::SettingsMsg_<ContainerAllocator> >::stream(s, indent + "  ", v.settings);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HEBIROS_MESSAGE_COMMANDMSG_H
