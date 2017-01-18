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
	double xOffset = -0.050;
	double yOffset = 0.0;
	double zOffset = 0.0;
	double pitchOffset = 1.56;
	double rollOffset =3.14;
	double yawOffset =3.14;

public:
	void generateEndEffectorPose(Manipulation::ObjectInfo obj, Manipulation::EndEffectorPose_out pos);

};

#endif //EEPOSGENERATOR
