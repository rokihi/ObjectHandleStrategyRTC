#ifndef EEPOSGENERATOR
#define EEPOSGENERATOR

#include "TrajectoryPlannerSVC_impl.h"

class EndEffectorPoseGenerator{
private:
	Manipulation::EndEffectorPose m_eePos;
	Manipulation::ObjectInfo m_objInfo;

	//false: left-hand system
	bool rightHandSystem = true;

public:
	virtual void generateEndEffectorPose(Manipulation::ObjectInfo obj, Manipulation::EndEffectorPose_out pos) = 0;
};

class LinearTransform : public EndEffectorPoseGenerator{
private:
	double xOffset = -50.0;
	double yOffset = 0.0;
	double zOffset = 0.0;
	double pitchOffset = 0.0;
	double rollOffset = 0.0;
	double yawOffset = 0.0;

public:
	void generateEndEffectorPose(Manipulation::ObjectInfo obj, Manipulation::EndEffectorPose_out pos);

};

#endif //EEPOSGENERATOR
