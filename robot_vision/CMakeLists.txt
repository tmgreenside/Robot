cmake_minimum_required(VERSION 3.10)
include(project.cmake)

set(LIB_NAME ${PROJECT}_${COMPONENT})

project( ${LIB_NAME} 
)

# TODO: Add the robot_common library
add_subdirectory(../common)

set(PUBLIC_HEADER src/${PROJECT}_${COMPONENT}.hpp)
file(GLOB HEADERS "*.hpp" "*.h")
file(GLOB SOURCES "*.cpp")

add_library(${LIB_NAME} SHARED ${SOURCES} )

# set_target_properties(${LIB_NAME} PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(${LIB_NAME} PROPERTIES SOVERSION ${VERSION_MAJOR})
set_target_properties(${LIB_NAME} PROPERTIES PUBLIC_HEADER ${PUBLIC_HEADER})

set(CMAKE_CXX_STANDARD 14)

# target_link_libraries(${LIB_NAME} )

install(TARGETS ${LIB_NAME}
    LIBRARY DESTINATION "${PROJECT}/lib"
    PUBLIC_HEADER DESTINATION "${PROJECT}/include")