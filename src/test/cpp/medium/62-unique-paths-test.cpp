#include "medium/62-unique-paths.h"

#include "gtest/gtest.h"

TEST(UniquePaths, FirstExample) {
  int m{3}; 
  int n{7};
  leetcode::UniquePaths solution;
  int expected{28};
  ASSERT_EQ(expected, solution.unique_paths(m, n));
}

/*
 * Explanation:
 * From the top-left corner, there are a total of 3 ways to reach the 
 * bottom-right corner:
    1. Right -> Down -> Down
    2. Down -> Down -> Right
    3. Down -> Right -> Down
 */
TEST(UniquePaths, SecondExample) {
  int m{3}; 
  int n{2};
  leetcode::UniquePaths solution;
  int expected{3};
  ASSERT_EQ(expected, solution.unique_paths(m, n));
}

TEST(UniquePaths, ThirdExample) {
  int m{7}; 
  int n{3};
  leetcode::UniquePaths solution;
  int expected{28};
  ASSERT_EQ(expected, solution.unique_paths(m, n));
}

TEST(UniquePaths, FourthExample) {
  int m{3}; 
  int n{3};
  leetcode::UniquePaths solution;
  int expected{6};
  ASSERT_EQ(expected, solution.unique_paths(m, n));
}
