add_executable(two-sum-test 1-two-sum-test.cpp)
target_link_libraries(two-sum-test gtest_main two-sum)
add_test(NAME two-sum-test COMMAND two-sum-test)
