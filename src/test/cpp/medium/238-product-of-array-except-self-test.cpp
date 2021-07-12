#include "medium/238-product-of-array-except-self.h"

#include "gtest/gtest.h"

TEST(ProductOfArrayExceptSelf, FirstExample) {
  std::vector<int> nums{1, 2, 3, 4};
  leetcode::ProductOfArrayExceptSelf solution;
  std::vector<int> expected{24, 12, 8, 6};
  ASSERT_EQ(expected, solution.productExceptSelf(nums));
}

TEST(ProductOfArrayExceptSelf, SecondExample) {
  std::vector<int> nums{-1, 1, 0, -3, 3};
  leetcode::ProductOfArrayExceptSelf solution;
  std::vector<int> expected{0, 0, 9, 0, 0};
  ASSERT_EQ(expected, solution.productExceptSelf(nums));
}
