file(GLOB LEETCODE_HARD_TEST_SRC_FILES "*.cpp")

foreach(file ${LEETCODE_HARD_TEST_SRC_FILES})
    register_test_executable(${file})
endforeach()
