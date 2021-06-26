add_executable(add-two-numbers-test 2-add-two-numbers-test.cpp)
target_link_libraries(add-two-numbers-test gtest_main add-two-numbers)
add_test(NAME add-two-numbers-test COMMAND add-two-numbers-test)

add_executable(longest-substring-without-repeating-characters-test 3-longest-substring-without-repeating-characters-test.cpp)
target_link_libraries(longest-substring-without-repeating-characters-test gtest_main longest-substring-without-repeating-characters)
add_test(NAME longest-substring-without-repeating-characters-test COMMAND longest-substring-without-repeating-characters-test)
