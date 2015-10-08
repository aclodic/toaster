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
 * Auto-generated by genmsg_cpp from file /home/gmilliez/robotpkg/wip/optitrack-genom3/work.elea/templates/ros/client/ros/optitrack/msg/or_pose_estimator_state.msg
 *
 */


#ifndef OPTITRACK_MESSAGE_OR_POSE_ESTIMATOR_STATE_H
#define OPTITRACK_MESSAGE_OR_POSE_ESTIMATOR_STATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <optitrack/or_time_ts.h>
#include <optitrack/or_pose_estimator_reference.h>
#include <optitrack/or_pose_estimator_motion.h>
#include <optitrack/or_t3d_pos.h>
#include <optitrack/or_t3d_pos_cov.h>
#include <optitrack/or_t3d_vel.h>
#include <optitrack/or_t3d_vel_cov.h>
#include <optitrack/or_t3d_acc.h>
#include <optitrack/or_t3d_acc_cov.h>

namespace optitrack
{
template <class ContainerAllocator>
struct or_pose_estimator_state_
{
  typedef or_pose_estimator_state_<ContainerAllocator> Type;

  or_pose_estimator_state_()
    : ts()
    , ref()
    , model()
    , pos()
    , pos_cov()
    , vel()
    , vel_cov()
    , acc()
    , acc_cov()  {
    }
  or_pose_estimator_state_(const ContainerAllocator& _alloc)
    : ts(_alloc)
    , ref(_alloc)
    , model(_alloc)
    , pos(_alloc)
    , pos_cov(_alloc)
    , vel(_alloc)
    , vel_cov(_alloc)
    , acc(_alloc)
    , acc_cov(_alloc)  {
    }



   typedef  ::optitrack::or_time_ts_<ContainerAllocator>  _ts_type;
  _ts_type ts;

   typedef  ::optitrack::or_pose_estimator_reference_<ContainerAllocator>  _ref_type;
  _ref_type ref;

   typedef  ::optitrack::or_pose_estimator_motion_<ContainerAllocator>  _model_type;
  _model_type model;

   typedef std::vector< ::optitrack::or_t3d_pos_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::optitrack::or_t3d_pos_<ContainerAllocator> >::other >  _pos_type;
  _pos_type pos;

   typedef std::vector< ::optitrack::or_t3d_pos_cov_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::optitrack::or_t3d_pos_cov_<ContainerAllocator> >::other >  _pos_cov_type;
  _pos_cov_type pos_cov;

   typedef std::vector< ::optitrack::or_t3d_vel_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::optitrack::or_t3d_vel_<ContainerAllocator> >::other >  _vel_type;
  _vel_type vel;

   typedef std::vector< ::optitrack::or_t3d_vel_cov_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::optitrack::or_t3d_vel_cov_<ContainerAllocator> >::other >  _vel_cov_type;
  _vel_cov_type vel_cov;

   typedef std::vector< ::optitrack::or_t3d_acc_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::optitrack::or_t3d_acc_<ContainerAllocator> >::other >  _acc_type;
  _acc_type acc;

   typedef std::vector< ::optitrack::or_t3d_acc_cov_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::optitrack::or_t3d_acc_cov_<ContainerAllocator> >::other >  _acc_cov_type;
  _acc_cov_type acc_cov;




  typedef boost::shared_ptr< ::optitrack::or_pose_estimator_state_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::optitrack::or_pose_estimator_state_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct or_pose_estimator_state_

typedef ::optitrack::or_pose_estimator_state_<std::allocator<void> > or_pose_estimator_state;

typedef boost::shared_ptr< ::optitrack::or_pose_estimator_state > or_pose_estimator_statePtr;
typedef boost::shared_ptr< ::optitrack::or_pose_estimator_state const> or_pose_estimator_stateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::optitrack::or_pose_estimator_state_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::optitrack::or_pose_estimator_state_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace optitrack

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/hydro/share/std_msgs/msg'], 'actionlib_msgs': ['/opt/ros/hydro/share/actionlib_msgs/msg'], 'optitrack': ['optitrack/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::optitrack::or_pose_estimator_state_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::optitrack::or_pose_estimator_state_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::optitrack::or_pose_estimator_state_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::optitrack::or_pose_estimator_state_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::optitrack::or_pose_estimator_state_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::optitrack::or_pose_estimator_state_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::optitrack::or_pose_estimator_state_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8ee3e8d6a2b32b124bd9c522581d579f";
  }

  static const char* value(const ::optitrack::or_pose_estimator_state_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8ee3e8d6a2b32b12ULL;
  static const uint64_t static_value2 = 0x4bd9c522581d579fULL;
};

template<class ContainerAllocator>
struct DataType< ::optitrack::or_pose_estimator_state_<ContainerAllocator> >
{
  static const char* value()
  {
    return "optitrack/or_pose_estimator_state";
  }

  static const char* value(const ::optitrack::or_pose_estimator_state_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::optitrack::or_pose_estimator_state_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# IDL struct ::or_pose_estimator::state\n\
or_time_ts ts\n\
or_pose_estimator_reference ref\n\
or_pose_estimator_motion model\n\
or_t3d_pos[] pos\n\
or_t3d_pos_cov[] pos_cov\n\
or_t3d_vel[] vel\n\
or_t3d_vel_cov[] vel_cov\n\
or_t3d_acc[] acc\n\
or_t3d_acc_cov[] acc_cov\n\
\n\
================================================================================\n\
MSG: optitrack/or_time_ts\n\
# IDL struct ::or::time::ts\n\
uint32 sec\n\
uint32 nsec\n\
\n\
================================================================================\n\
MSG: optitrack/or_pose_estimator_reference\n\
# IDL enum ::or_pose_estimator::reference\n\
uint32 or_pose_estimator_GLOBAL_FRAME = 0\n\
uint32 or_pose_estimator_LOCAL_FRAME = 1\n\
\n\
uint32 value\n\
\n\
================================================================================\n\
MSG: optitrack/or_pose_estimator_motion\n\
# IDL enum ::or_pose_estimator::motion\n\
uint32 or_pose_estimator_MOTION_UNKNOWN = 0\n\
uint32 or_pose_estimator_MOTION_NULL_VELOCITY = 1\n\
uint32 or_pose_estimator_MOTION_NULL_ACCEL = 2\n\
uint32 or_pose_estimator_MOTION_NULL_JERK = 3\n\
\n\
uint32 value\n\
\n\
================================================================================\n\
MSG: optitrack/or_t3d_pos\n\
# IDL struct ::or::t3d::pos\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 qw\n\
float64 qx\n\
float64 qy\n\
float64 qz\n\
\n\
================================================================================\n\
MSG: optitrack/or_t3d_pos_cov\n\
# IDL struct ::or::t3d::pos_cov\n\
float64[28] cov\n\
\n\
================================================================================\n\
MSG: optitrack/or_t3d_vel\n\
# IDL struct ::or::t3d::vel\n\
float64 vx\n\
float64 vy\n\
float64 vz\n\
float64 wx\n\
float64 wy\n\
float64 wz\n\
\n\
================================================================================\n\
MSG: optitrack/or_t3d_vel_cov\n\
# IDL struct ::or::t3d::vel_cov\n\
float64[21] cov\n\
\n\
================================================================================\n\
MSG: optitrack/or_t3d_acc\n\
# IDL struct ::or::t3d::acc\n\
float64 ax\n\
float64 ay\n\
float64 az\n\
\n\
================================================================================\n\
MSG: optitrack/or_t3d_acc_cov\n\
# IDL struct ::or::t3d::acc_cov\n\
float64[6] cov\n\
";
  }

  static const char* value(const ::optitrack::or_pose_estimator_state_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::optitrack::or_pose_estimator_state_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ts);
      stream.next(m.ref);
      stream.next(m.model);
      stream.next(m.pos);
      stream.next(m.pos_cov);
      stream.next(m.vel);
      stream.next(m.vel_cov);
      stream.next(m.acc);
      stream.next(m.acc_cov);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct or_pose_estimator_state_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::optitrack::or_pose_estimator_state_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::optitrack::or_pose_estimator_state_<ContainerAllocator>& v)
  {
    s << indent << "ts: ";
    s << std::endl;
    Printer< ::optitrack::or_time_ts_<ContainerAllocator> >::stream(s, indent + "  ", v.ts);
    s << indent << "ref: ";
    s << std::endl;
    Printer< ::optitrack::or_pose_estimator_reference_<ContainerAllocator> >::stream(s, indent + "  ", v.ref);
    s << indent << "model: ";
    s << std::endl;
    Printer< ::optitrack::or_pose_estimator_motion_<ContainerAllocator> >::stream(s, indent + "  ", v.model);
    s << indent << "pos[]" << std::endl;
    for (size_t i = 0; i < v.pos.size(); ++i)
    {
      s << indent << "  pos[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::optitrack::or_t3d_pos_<ContainerAllocator> >::stream(s, indent + "    ", v.pos[i]);
    }
    s << indent << "pos_cov[]" << std::endl;
    for (size_t i = 0; i < v.pos_cov.size(); ++i)
    {
      s << indent << "  pos_cov[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::optitrack::or_t3d_pos_cov_<ContainerAllocator> >::stream(s, indent + "    ", v.pos_cov[i]);
    }
    s << indent << "vel[]" << std::endl;
    for (size_t i = 0; i < v.vel.size(); ++i)
    {
      s << indent << "  vel[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::optitrack::or_t3d_vel_<ContainerAllocator> >::stream(s, indent + "    ", v.vel[i]);
    }
    s << indent << "vel_cov[]" << std::endl;
    for (size_t i = 0; i < v.vel_cov.size(); ++i)
    {
      s << indent << "  vel_cov[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::optitrack::or_t3d_vel_cov_<ContainerAllocator> >::stream(s, indent + "    ", v.vel_cov[i]);
    }
    s << indent << "acc[]" << std::endl;
    for (size_t i = 0; i < v.acc.size(); ++i)
    {
      s << indent << "  acc[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::optitrack::or_t3d_acc_<ContainerAllocator> >::stream(s, indent + "    ", v.acc[i]);
    }
    s << indent << "acc_cov[]" << std::endl;
    for (size_t i = 0; i < v.acc_cov.size(); ++i)
    {
      s << indent << "  acc_cov[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::optitrack::or_t3d_acc_cov_<ContainerAllocator> >::stream(s, indent + "    ", v.acc_cov[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPTITRACK_MESSAGE_OR_POSE_ESTIMATOR_STATE_H
