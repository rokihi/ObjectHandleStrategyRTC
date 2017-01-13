// -*-C++-*-
/*!
 * @file  TrajectoryPlannerSVC_impl.h
 * @brief Service implementation header of TrajectoryPlanner.idl
 *
 */

#include "BasicDataTypeSkel.h"
#include "ExtendedDataTypesSkel.h"
#include "InterfaceDataTypesSkel.h"

#include "TrajectoryPlannerSkel.h"

#ifndef TRAJECTORYPLANNERSVC_IMPL_H
#define TRAJECTORYPLANNERSVC_IMPL_H
 
#include "EndEffectorPoseGenerator.h"
class EndEffectorPoseGenerator;
class LinearTransform;

/*!
 * @class ObjectHandleStrategyServiceSVC_impl
 * Example class implementing IDL interface Manipulation::ObjectHandleStrategyService
 */
class Manipulation_ObjectHandleStrategyServiceSVC_impl
 : public virtual POA_Manipulation::ObjectHandleStrategyService,
   public virtual PortableServer::RefCountServantBase
{
 private:
   // Make sure all instances are built on the heap by making the
   // destructor non-public
   //virtual ~ObjectHandleStrategyServiceSVC_impl();

   EndEffectorPoseGenerator* m_generator;

 public:
  /*!
   * @brief standard constructor
   */
   Manipulation_ObjectHandleStrategyServiceSVC_impl();
  /*!
   * @brief destructor
   */
   virtual ~Manipulation_ObjectHandleStrategyServiceSVC_impl();

   // attributes and operations
   Manipulation::ReturnValue* getApproachOrientation(const Manipulation::ObjectInfo& objInfo, Manipulation::EndEffectorPose& eePos);

};


#endif // TRAJECTORYPLANNERSVC_IMPL_H


