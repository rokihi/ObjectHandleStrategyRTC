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
Manipulation::ReturnValue* Manipulation_ObjectHandleStrategyServiceSVC_impl::getApproachOrientation(const Manipulation::ObjectInfo& objInfo, Manipulation::EndEffectorPose_out eePos)
{
	m_generator = new LinearTransform();
	m_generator->generateEndEffectorPose(objInfo, eePos);

	Manipulation::ReturnValue_var result(new Manipulation::ReturnValue());
	result->id = Manipulation::OK;
	result->message = CORBA::string_dup("OK");
	return result._retn();
}


// End of example implementational code



