#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ObjectHandleStrategyRTC" for configuration ""
set_property(TARGET ObjectHandleStrategyRTC APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(ObjectHandleStrategyRTC PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_NOCONFIG "pthread;omniORB4;omnithread;omniDynamic4;RTC;coil"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/components/lib/ObjectHandleStrategyRTC.so"
  IMPORTED_SONAME_NOCONFIG "ObjectHandleStrategyRTC.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ObjectHandleStrategyRTC )
list(APPEND _IMPORT_CHECK_FILES_FOR_ObjectHandleStrategyRTC "${_IMPORT_PREFIX}/components/lib/ObjectHandleStrategyRTC.so" )

# Import target "ObjectHandleStrategyRTCComp" for configuration ""
set_property(TARGET ObjectHandleStrategyRTCComp APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(ObjectHandleStrategyRTCComp PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/components/bin/ObjectHandleStrategyRTCComp"
  )

list(APPEND _IMPORT_CHECK_TARGETS ObjectHandleStrategyRTCComp )
list(APPEND _IMPORT_CHECK_FILES_FOR_ObjectHandleStrategyRTCComp "${_IMPORT_PREFIX}/components/bin/ObjectHandleStrategyRTCComp" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
