cmake_minimum_required(VERSION 3.19.7)

project(Leetcode)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_BUILD_TYPE Debug)

set(source-directory
  "${CMAKE_SOURCE_DIR}/src/main/cpp/")
set(test-directory
  "${CMAKE_SOURCE_DIR}/src/test/cpp/")
include_directories(${source-directory} ${test-directory})

add_subdirectory(src)

#Turn off with -DTEST=OFF
option(TEST "Build all tests." ON)
if(TEST)
  include(cmake/googletest.cmake)
  add_subdirectory(src/test)
endif()
