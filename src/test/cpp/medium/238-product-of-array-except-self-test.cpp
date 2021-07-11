#include "medium/238-product-of-array-except-self.h"

#include "gtest/gtest.h"

TEST(ProductOfArrayExceptSelf, FirstExample) {
  std::vector<int> nums{1,2,3,4};
  leetcode::ProductOfArrayExceptSelf solution;
  std::vector<int> expected{24, 12, 8, 6};
  ASSERT_EQ(expected, solution.productExceptSelf(nums));
}
