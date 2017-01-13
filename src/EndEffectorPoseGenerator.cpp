
class EndEffectorPoseGenerator{
public:
	virtual void determineEndEffectorPose(Manipulation::ObjectInfo obj, Manipulation::EndEffectorPose pos) = 0;
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

public:
	void determineEndEffectorPose(Manipulation::ObjectInfo obj, Manipulation::EndEffectorPose pos){

		pos.Pose.position.x = obj.pose.position.x + xOffset;
		pos.Pose.position.y = obj.pose.position.y + yOffset;
		pos.Pose.position.z = obj.pose.position.z + zOffset;

		pos.Pose.orientation.p = obj.pose.orientation.p + pOffset;
		pos.Pose.orientation.r = obj.pose.orientation.r + rOffset;
		pos.Pose.orientation.y = obj.pose.orientation.y + yOffset;
	}

};
