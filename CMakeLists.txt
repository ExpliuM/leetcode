cmake_minimum_required(VERSION 3.25)

set(CMAKE_BUILD_TYPE Debug)

project(main C)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set(SOURCES main.c two_sum.c two_sum.h three-sum-closest.c three-sum-closest.h)

add_executable(main ${SOURCES})

# here we specify that the project is C language only, so the default
# C compiler on the system will be used
