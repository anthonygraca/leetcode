#include "easy/70-climbing-stairs.h"

#include "gtest/gtest.h"

/*
 * Explanation:
 * 1.) 1 step + 1 step
 * 2.) 2 steps
 */
TEST(ClimbingStairs, FirstExample) {
  int input{2};
  leetcode::ClimbingStairs solution;
  int expected{2};
  ASSERT_EQ(expected, solution.climbStairs(input));
}

/*
 * Explanation:
 * 1.) 1 step + 1 step + 1 step
 * 2.) 1 step + 2 steps
 * 3.) 2 steps + 1 step
 */
/*
TEST(ClimbingStairs, SecondExample) {
  int input{3};
  leetcode::ClimbingStairs solution;
  int expected{3};
  ASSERT_EQ(expected, solution.climbStairs(input));
}
*/
