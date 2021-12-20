file(GLOB LEETCODE_TEST_UTILS_SRC_FILES "*.cpp")

foreach(file ${LEETCODE_TEST_UTILS_SRC_FILES})
    register_library(${file})
endforeach()
