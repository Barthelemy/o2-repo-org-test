# @author  Barthélémy von Haller

# Define the source and header files

set(PUBLIC_HEADERS
  "${CMAKE_CURRENT_BINARY_DIR}/../include/Common/Version.h"
  ../include/Common/Bar.h
)

set(LIB_HEADERS
  ${PUBLIC_HEADERS}
  NonPublic.h
)

set(LIB_SOURCES
  Bar.cxx
  NonPublic.cxx
)

set(APP_HEADERS
)

set(APP_SOURCES
  main.cxx
)

# Define variables in order not to repeat ourselves.
set(LIBRARY_NAME Common)
set(APPLICATION_NAME commonApp)

# Define the library
add_library(${LIBRARY_NAME} SHARED ${LIB_SOURCES})

# Set the build version. It will be used in the name of the lib, with corresponding
# symlinks created. SOVERSION could also be specified for api version. 
set_target_properties(${LIBRARY_NAME} PROPERTIES
  VERSION ${VERSION}  # ${VERSION} was defined in the main CMakeLists.
  FRAMEWORK FALSE
  PUBLIC_HEADER "${PUBLIC_HEADERS}" # specify the public headers
)

# Links the target library against the libraries in a given bucket (defined in the top dir)
o2_target_link_bucket(TARGET ${LIBRARY_NAME} BUCKET "Common_Bucket")

include_directories(../include)

# Define application
add_executable(${APPLICATION_NAME} ${APP_SOURCES})

# Links the application against the libraries in the bucket
o2_target_link_bucket(TARGET ${APPLICATION_NAME} BUCKET "Common_Bucket")
# TODO # Links the target application against the library libCommon -> this is wrong !
target_link_libraries(${APPLICATION_NAME} ${LIBRARY_NAME})

# Says how and where to install software
# Targets:
#   * <prefix>/lib/<libraries>
#   * header location after install: <prefix>/include/<module>/*.h
#   * headers can be included by C++ code `#<module>/Bar.hpp>`
install(TARGETS ${LIBRARY_NAME} ${APPLICATION_NAME}
  EXPORT ${PROJECT_NAME}Targets            # for downstream dependencies
  ARCHIVE DESTINATION lib COMPONENT libs   # static lib
  RUNTIME DESTINATION bin COMPONENT libs   # binaries
  LIBRARY DESTINATION lib COMPONENT libs   # shared lib
  FRAMEWORK DESTINATION bin COMPONENT libs # for mac
  PUBLIC_HEADER DESTINATION include/${LIBRARY_NAME} COMPONENT devel
  INCLUDES DESTINATION include             # headers
)

