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
 * Auto-generated by genmsg_cpp from file /home/gmilliez/robotpkg/wip/optitrack-genom3/work.elea/templates/ros/client/ros/optitrack/msg/genom_state_time.msg
 *
 */


#ifndef OPTITRACK_MESSAGE_GENOM_STATE_TIME_H
#define OPTITRACK_MESSAGE_GENOM_STATE_TIME_H


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
struct genom_state_time_
{
  typedef genom_state_time_<ContainerAllocator> Type;

  genom_state_time_()
    : last(0.0)
    , max(0.0)
    , avg(0.0)  {
    }
  genom_state_time_(const ContainerAllocator& _alloc)
    : last(0.0)
    , max(0.0)
    , avg(0.0)  {
    }



   typedef double _last_type;
  _last_type last;

   typedef double _max_type;
  _max_type max;

   typedef double _avg_type;
  _avg_type avg;




  typedef boost::shared_ptr< ::optitrack::genom_state_time_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::optitrack::genom_state_time_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct genom_state_time_

typedef ::optitrack::genom_state_time_<std::allocator<void> > genom_state_time;

typedef boost::shared_ptr< ::optitrack::genom_state_time > genom_state_timePtr;
typedef boost::shared_ptr< ::optitrack::genom_state_time const> genom_state_timeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::optitrack::genom_state_time_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::optitrack::genom_state_time_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace optitrack

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/hydro/share/std_msgs/msg'], 'actionlib_msgs': ['/opt/ros/hydro/share/actionlib_msgs/msg'], 'optitrack': ['optitrack/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::optitrack::genom_state_time_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::optitrack::genom_state_time_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::optitrack::genom_state_time_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::optitrack::genom_state_time_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::optitrack::genom_state_time_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::optitrack::genom_state_time_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::optitrack::genom_state_time_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2723af04d52dbfc8fa8b72c299c38576";
  }

  static const char* value(const ::optitrack::genom_state_time_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2723af04d52dbfc8ULL;
  static const uint64_t static_value2 = 0xfa8b72c299c38576ULL;
};

template<class ContainerAllocator>
struct DataType< ::optitrack::genom_state_time_<ContainerAllocator> >
{
  static const char* value()
  {
    return "optitrack/genom_state_time";
  }

  static const char* value(const ::optitrack::genom_state_time_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::optitrack::genom_state_time_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# IDL struct ::genom::state::time\n\
float64 last\n\
float64 max\n\
float64 avg\n\
";
  }

  static const char* value(const ::optitrack::genom_state_time_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::optitrack::genom_state_time_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.last);
      stream.next(m.max);
      stream.next(m.avg);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct genom_state_time_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::optitrack::genom_state_time_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::optitrack::genom_state_time_<ContainerAllocator>& v)
  {
    s << indent << "last: ";
    Printer<double>::stream(s, indent + "  ", v.last);
    s << indent << "max: ";
    Printer<double>::stream(s, indent + "  ", v.max);
    s << indent << "avg: ";
    Printer<double>::stream(s, indent + "  ", v.avg);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPTITRACK_MESSAGE_GENOM_STATE_TIME_H
