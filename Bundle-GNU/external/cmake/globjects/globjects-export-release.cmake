#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "globjects::globjects" for configuration "Release"
set_property(TARGET globjects::globjects APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(globjects::globjects PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libglobjects.so.2.0.0"
  IMPORTED_SONAME_RELEASE "libglobjects.so.2"
  )

list(APPEND _IMPORT_CHECK_TARGETS globjects::globjects )
list(APPEND _IMPORT_CHECK_FILES_FOR_globjects::globjects "${_IMPORT_PREFIX}/lib/libglobjects.so.2.0.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
