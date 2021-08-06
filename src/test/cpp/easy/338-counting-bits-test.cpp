#include "easy/338-counting-bits.h"

#include "gtest/gtest.h"

/*
 * Explanation:
 *  0 --> 0
 *  1 --> 1
 *  2 --> 10
 */
TEST(CountingBits, FirstExample) {
  int n{2};
  leetcode::CountingBits solution;
  std::vector<int> expected{0, 1, 1};
  ASSERT_EQ(expected, solution.countBits(n));
}

/*
 * Explanation:
 *  0 --> 0
 *  1 --> 1
 *  2 --> 10
 *  3 --> 11
 *  4 --> 100
 *  5 --> 101
TEST(CountingBits, SecondExample) {
  int n{5};
  leetcode::CountingBits solution;
  std::vector<int> expected{0, 1, 1, 2, 1, 2};
  ASSERT_EQ(expected, solution.countBits(n));
}
*/
