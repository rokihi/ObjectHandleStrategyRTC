// -*-C++-*-

#include "EndEffectorPoseGenerator.h"

void LinearTransform::generateEndEffectorPose(Manipulation::ObjectInfo obj, Manipulation::EndEffectorPose_out pos){

	pos.pose.position.x = obj.pose.position.x + xOffset;
	pos.pose.position.y = obj.pose.position.y + yOffset;
	pos.pose.position.z = obj.pose.position.z + zOffset;

	pos.pose.orientation.p = obj.pose.orientation.p + pitchOffset;
	pos.pose.orientation.r = obj.pose.orientation.r + rollOffset;
	pos.pose.orientation.y = obj.pose.orientation.y + yawOffset;
}

