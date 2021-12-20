file(GLOB LEETCODE_EASY_TEST_SRC_FILES "*.cpp")

foreach(file ${LEETCODE_EASY_TEST_SRC_FILES})
    register_test_executable(${file})
endforeach()
