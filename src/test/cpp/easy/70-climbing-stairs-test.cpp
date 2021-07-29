#include "easy/70-climbing-stairs.h"

#include "gtest/gtest.h"

TEST(ClimbingStairs, FirstExample) {
  int input{2};
  leetcode::ClimbingStairs solution;
  int expected{2};
  ASSERT_EQ(expected, solution.climbStairs(input));
}
