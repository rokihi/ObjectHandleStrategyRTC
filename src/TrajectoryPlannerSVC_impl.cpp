// -*-C++-*-
/*!
 * @file  TrajectoryPlannerSVC_impl.cpp
 * @brief Service implementation code of TrajectoryPlanner.idl
 *
 */

#include "TrajectoryPlannerSVC_impl.h"

/*
 * Example implementational code for IDL interface Manipulation::ObjectHandleStrategyService
 */
Manipulation_ObjectHandleStrategyServiceSVC_impl::Manipulation_ObjectHandleStrategyServiceSVC_impl()
{
  // Please add extra constructor code here.
}


Manipulation_ObjectHandleStrategyServiceSVC_impl::~Manipulation_ObjectHandleStrategyServiceSVC_impl()
{
  // Please add extra destructor code here.
}


/*
 * Methods corresponding to IDL attributes and operations
 */
Manipulation::ReturnValue* Manipulation_ObjectHandleStrategyServiceSVC_impl::getApproachOrientation(const Manipulation::ObjectInfo& objInfo, Manipulation::EndEffectorPose& eePos)
{
	Manipulation::ReturnValue* result;
	m_generator = new LinearTransform();
	m_generator->determineEndEffectorPose(objInfo, eePos);
	return result;
}


// End of example implementational code



