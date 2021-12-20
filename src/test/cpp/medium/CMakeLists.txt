file(GLOB LEETCODE_MEDIUM_TEST_SRC_FILES "*.cpp")

foreach(file ${LEETCODE_MEDIUM_TEST_SRC_FILES})
    register_test_executable(${file})
endforeach()
