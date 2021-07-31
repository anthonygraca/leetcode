#include "medium/11-container-with-most-water.h"

#include "gtest/gtest.h"

/*
 * Explanation: The above vertical lines are represented by array 
 * [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the 
 * container can contain is 49.
 */
TEST(ContainerWithMostWater, FirstExample) {
  std::vector<int> height{1, 8, 6, 2, 5, 4, 8, 3, 7};
  leetcode::ContainerWithMostWater solution;
  int expected{49};
  ASSERT_EQ(expected, solution.maxArea(height));
}

/*
TEST(ContainerWithMostWater, SecondExample) {
  std::vector<int> height{1, 1};
  leetcode::ContainerWithMostWater solution;
  int expected{1};
  ASSERT_EQ(expected, solution.maxArea(height));
}

TEST(ContainerWithMostWater, ThirdExample) {
  std::vector<int> height{4, 3, 2, 1, 4};
  leetcode::ContainerWithMostWater solution;
  int expected{16};
  ASSERT_EQ(expected, solution.maxArea(height));
}

TEST(ContainerWithMostWater, FourthExample) {
  std::vector<int> height{1, 2, 1};
  leetcode::ContainerWithMostWater solution;
  int expected{2};
  ASSERT_EQ(expected, solution.maxArea(height));
}
*/
