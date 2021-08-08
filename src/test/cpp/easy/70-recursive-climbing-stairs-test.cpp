#include "easy/70-recursive-climbing-stairs.h"

#include "gtest/gtest.h"

/*
 * Explanation:
 * 1.) 1 step + 1 step
 * 2.) 2 steps
 */
TEST(RecursiveClimbingStairs, FirstExample) {
  int input{2};
  leetcode::RecursiveClimbingStairs solution(input);
  int expected{2};
  ASSERT_EQ(expected, solution.climbStairs(input));
}

/*
 * Explanation:
 * 1.) 1 step + 1 step + 1 step
 * 2.) 1 step + 2 steps
 * 3.) 2 steps + 1 step
 */
TEST(RecursiveClimbingStairs, SecondExample) {
  int input{3};
  leetcode::RecursiveClimbingStairs solution(input);
  int expected{3};
  ASSERT_EQ(expected, solution.climbStairs(input));
}
