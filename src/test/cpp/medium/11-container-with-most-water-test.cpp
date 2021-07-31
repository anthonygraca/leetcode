#include "medium/11-container-with-most-water.h"

#include "gtest/gtest.h"

TEST(ContainerWithMostWater, FirstExample) {
  std::vector<int> height{1, 8, 6, 2, 5, 4, 8, 3, 7};
  leetcode::ContainerWithMostWater solution;
  int expected{49};
  ASSERT_EQ(expected, solution.maxArea(height));
}
