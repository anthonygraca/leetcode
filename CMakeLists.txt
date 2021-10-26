cmake_minimum_required(VERSION 3.19.7)

project(Leetcode)

set(CMAKE_CXX_STANDARD 20)

#set(AIRBUS_SECURITY_LAB_FLAGS "-O2 -Werror -Walloca -Wcast-qual -Wconversion -Wformat=2 -Wformat-security -Wnull-dereference -Wstack-protector -Wvla -Warray-bounds -Warray-bounds-pointer-arithmetic -Wassign-enum -Wbad-function-cast -Wconditional-uninitialized -Wconversion -Wfloat-equal -Wformat-type-confusion -Widiomatic-parentheses -Wimplicit-fallthrough -Wloop-analysis -Wpointer-arith -Wshift-sign-overflow -Wshorten-64-to-32 -Wswitch-enum -Wtautological-constant-in-range-compare -Wunreachable-code-aggressive -Wthread-safety -Wthread-safety-beta -Wcomma -D_FORTIFY_SOURCE=2 -fstack-protector-strong -fPIE ")
#-Wl,-z,relro -Wl,-z,now -Wl,-z,noexecstack -Wl,-z,separate-codeset")

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${AIRBUS_SECURITY_LAB_FLAGS}")

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
