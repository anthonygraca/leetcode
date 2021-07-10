add_executable(two-sum-test 1-two-sum-test.cpp)
target_link_libraries(two-sum-test gtest_main two-sum)
add_test(NAME two-sum-test COMMAND two-sum-test)

add_executable(merge-two-sorted-lists-test 21-merge-two-sorted-lists-test.cpp)
target_link_libraries(merge-two-sorted-lists-test gtest_main
                      merge-two-sorted-lists)
add_test(NAME merge-two-sorted-lists-test COMMAND merge-two-sorted-lists-test)

add_executable(best-time-to-buy-and-sell-stock-test
               121-best-time-to-buy-and-sell-stock-test.cpp)
target_link_libraries(best-time-to-buy-and-sell-stock-test gtest_main
                      best-time-to-buy-and-sell-stock)
add_test(NAME best-time-to-buy-and-sell-stock-test COMMAND
         best-time-to-buy-and-sell-stock-test)

add_executable(contains-duplicate-test 217-contains-duplicate-test.cpp)
target_link_libraries(contains-duplicate-test gtest_main contains-duplicate)
add_test(NAME contains-duplicate-test COMMAND contains-duplicate-test)
