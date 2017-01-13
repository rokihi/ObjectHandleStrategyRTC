// -*- C++ -*-
/*!
 * @file  ObjectHandleStrategyRTC.cpp
 * @brief ModuleDescription
 * @date $Date$
 *
 * $Id$
 */

#include "ObjectHandleStrategyRTC.h"

// Module specification
// <rtc-template block="module_spec">
static const char* objecthandlestrategyrtc_spec[] =
  {
    "implementation_id", "ObjectHandleStrategyRTC",
    "type_name",         "ObjectHandleStrategyRTC",
    "description",       "ModuleDescription",
    "version",           "1.0.0",
    "vendor",            "ogata-lab",
    "category",          "Category",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
ObjectHandleStrategyRTC::ObjectHandleStrategyRTC(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_ObjectHandleStrategyServicePort("ObjectHandleStrategyService")

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
ObjectHandleStrategyRTC::~ObjectHandleStrategyRTC()
{
}



RTC::ReturnCode_t ObjectHandleStrategyRTC::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  
  // Set OutPort buffer
  
  // Set service provider to Ports
  m_ObjectHandleStrategyServicePort.registerProvider("ObjectHandleStrategyService", "Manipulation::ObjectHandleStrategyService", m_ObjectHandleStrategyService);
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  addPort(m_ObjectHandleStrategyServicePort);
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t ObjectHandleStrategyRTC::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t ObjectHandleStrategyRTC::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t ObjectHandleStrategyRTC::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


RTC::ReturnCode_t ObjectHandleStrategyRTC::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t ObjectHandleStrategyRTC::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t ObjectHandleStrategyRTC::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t ObjectHandleStrategyRTC::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t ObjectHandleStrategyRTC::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t ObjectHandleStrategyRTC::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t ObjectHandleStrategyRTC::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t ObjectHandleStrategyRTC::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{
 
  void ObjectHandleStrategyRTCInit(RTC::Manager* manager)
  {
    coil::Properties profile(objecthandlestrategyrtc_spec);
    manager->registerFactory(profile,
                             RTC::Create<ObjectHandleStrategyRTC>,
                             RTC::Delete<ObjectHandleStrategyRTC>);
  }
  
};


