
/* 
 * File:   TOASTERRobotReader.h
 * Author: gmilliez
 *
 * Created on November 12, 2014, 6:24 PM
 * This class will be used to read toaster-lib humans from topic.

 */

#ifndef TOASTERHUMANREADER_H
#define	TOASTERHUMANREADER_H

#include <ros/ros.h>
#include "toaster-lib/Human.h"
#include "toaster_msgs/HumanList.h"
#include <map>

class ToasterHumanReader{

    public:
       std::map<unsigned int, Human*> lastConfig_;
       bool fullHuman_;

       bool isPresent(unsigned int id);

       ToasterHumanReader(ros::NodeHandle& node, bool fullHuman);

    private:
       void humanJointStateCallBack(const toaster_msgs::HumanList::ConstPtr& msg);
       ros::Subscriber sub_;

};

#endif	/* TOASTERHUMANREADER_H */