add_executable(add-two-numbers-test 2-add-two-numbers-test.cpp)
target_link_libraries(add-two-numbers-test gtest_main add-two-numbers)
add_test(NAME add-two-numbers-test COMMAND add-two-numbers-test)
