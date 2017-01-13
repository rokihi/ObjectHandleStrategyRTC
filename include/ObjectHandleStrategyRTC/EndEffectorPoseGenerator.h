#ifndef EEPOSGENERATOR
#define EEPOSGENERATOR

#include "TrajectoryPlannerSVC_impl.h"

class EndEffectorPoseGenerator{
public:
	virtual void determineEndEffectorPose(Manipulation::ObjectInfo obj, Manipulation::EndEffectorPose_out pos) = 0;
};

class LinearTransform : public EndEffectorPoseGenerator{
private:
	Manipulation::EndEffectorPose m_eePos;
	Manipulation::ObjectInfo m_objInfo;

	double xOffset = 0;
	double yOffset = 0;
	double zOffset = -50;
	double pitchOffset = 0;
	double rollOffset = 0;
	double yawOffset = 0;

	//false: left-hand system
	bool rightHandSystem = true;

public:
	void determineEndEffectorPose(Manipulation::ObjectInfo obj, Manipulation::EndEffectorPose_out pos);

};

#endif //EEPOSGENERATOR
