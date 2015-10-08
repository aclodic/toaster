/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/gmilliez/robotpkg/wip/optitrack-genom3/work.elea/templates/ros/client/ros/optitrack/srv/get_logfile.srv
 *
 */


#ifndef OPTITRACK_MESSAGE_GET_LOGFILERESPONSE_H
#define OPTITRACK_MESSAGE_GET_LOGFILERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace optitrack
{
template <class ContainerAllocator>
struct get_logfileResponse_
{
  typedef get_logfileResponse_<ContainerAllocator> Type;

  get_logfileResponse_()
    : genom_success(false)
    , genom_exdetail()
    , logfile()  {
    }
  get_logfileResponse_(const ContainerAllocator& _alloc)
    : genom_success(false)
    , genom_exdetail(_alloc)
    , logfile(_alloc)  {
    }



   typedef uint8_t _genom_success_type;
  _genom_success_type genom_success;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _genom_exdetail_type;
  _genom_exdetail_type genom_exdetail;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _logfile_type;
  _logfile_type logfile;




  typedef boost::shared_ptr< ::optitrack::get_logfileResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::optitrack::get_logfileResponse_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct get_logfileResponse_

typedef ::optitrack::get_logfileResponse_<std::allocator<void> > get_logfileResponse;

typedef boost::shared_ptr< ::optitrack::get_logfileResponse > get_logfileResponsePtr;
typedef boost::shared_ptr< ::optitrack::get_logfileResponse const> get_logfileResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::optitrack::get_logfileResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::optitrack::get_logfileResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace optitrack

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'optitrack': ['optitrack/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::optitrack::get_logfileResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::optitrack::get_logfileResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::optitrack::get_logfileResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::optitrack::get_logfileResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::optitrack::get_logfileResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::optitrack::get_logfileResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::optitrack::get_logfileResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b87d842ccd0496b59e6eaee6d6cf4127";
  }

  static const char* value(const ::optitrack::get_logfileResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb87d842ccd0496b5ULL;
  static const uint64_t static_value2 = 0x9e6eaee6d6cf4127ULL;
};

template<class ContainerAllocator>
struct DataType< ::optitrack::get_logfileResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "optitrack/get_logfileResponse";
  }

  static const char* value(const ::optitrack::get_logfileResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::optitrack::get_logfileResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool genom_success\n\
string genom_exdetail\n\
string logfile\n\
\n\
";
  }

  static const char* value(const ::optitrack::get_logfileResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::optitrack::get_logfileResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.genom_success);
      stream.next(m.genom_exdetail);
      stream.next(m.logfile);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct get_logfileResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::optitrack::get_logfileResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::optitrack::get_logfileResponse_<ContainerAllocator>& v)
  {
    s << indent << "genom_success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.genom_success);
    s << indent << "genom_exdetail: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.genom_exdetail);
    s << indent << "logfile: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.logfile);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPTITRACK_MESSAGE_GET_LOGFILERESPONSE_H
