#include "medium/62-unique-paths.h"

#include "gtest/gtest.h"

TEST(UniquePaths, FirstExample) {
  int m{3}; 
  int n{7};
  leetcode::UniquePaths solution;
  int expected{28};
  ASSERT_EQ(expected, solution.unique_paths(m, n));
}
