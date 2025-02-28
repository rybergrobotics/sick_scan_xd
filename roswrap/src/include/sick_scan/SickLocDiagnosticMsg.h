#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocDiagnosticMsg.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCDIAGNOSTICMSG_H
#define SICK_SCAN_MESSAGE_SICKLOCDIAGNOSTICMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace sick_scan
{
template <class ContainerAllocator>
struct SickLocDiagnosticMsg_
{
  typedef SickLocDiagnosticMsg_<ContainerAllocator> Type;

  SickLocDiagnosticMsg_()
    : header()
    , error_code(0)
    , message()  {
    }
  SickLocDiagnosticMsg_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , error_code(0)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _error_code_type;
  _error_code_type error_code;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;





  typedef std::shared_ptr< ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator> const> ConstPtr;

}; // struct SickLocDiagnosticMsg_

typedef ::sick_scan::SickLocDiagnosticMsg_<std::allocator<void> > SickLocDiagnosticMsg;

typedef std::shared_ptr< ::sick_scan::SickLocDiagnosticMsg > SickLocDiagnosticMsgPtr;
typedef std::shared_ptr< ::sick_scan::SickLocDiagnosticMsg const> SickLocDiagnosticMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator1> & lhs, const ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.error_code == rhs.error_code &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator1> & lhs, const ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sick_scan

namespace roswrap
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c51f3a40db1be5dd1e9301b7d3362c8d";
  }

  static const char* value(const ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc51f3a40db1be5ddULL;
  static const uint64_t static_value2 = 0x1e9301b7d3362c8dULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/SickLocDiagnosticMsg";
  }

  static const char* value(const ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Definition of ros message SickLocDiagnosticMsg.\n"
"# SickLocDiagnosticMsg publishes diagnostic messages\n"
"# of the sick localization driver.\n"
"\n"
"std_msgs/Header header      # ROS Header with sequence id, timestamp and frame id\n"
"int32  error_code  # error code (0 := no error)\n"
"string message     # diagnostic message\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace roswrap

namespace roswrap
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.error_code);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SickLocDiagnosticMsg_

} // namespace serialization
} // namespace roswrap

namespace roswrap
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sick_scan::SickLocDiagnosticMsg_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "error_code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.error_code);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCDIAGNOSTICMSG_H
