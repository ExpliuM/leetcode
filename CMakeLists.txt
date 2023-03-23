cmake_minimum_required(VERSION 3.25)

set(CMAKE_BUILD_TYPE Debug)

project(tests)

enable_language(C CXX)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB_RECURSE TEST_FILES "*.cc")
file(GLOB_RECURSE HEADER_FILES "*.h")
file(GLOB_RECURSE SOURCE_FILES "*.c")

list(FILTER TEST_FILES EXCLUDE REGEX "(build|\.history)")
list(FILTER HEADER_FILES EXCLUDE REGEX "(build|\.history)")
list(FILTER SOURCE_FILES EXCLUDE REGEX "(build|\.history)")

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

enable_testing()
add_executable(tests ${TEST_FILES} ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(tests GTest)
include(GoogleTest)

gtest_discover_tests(tests)