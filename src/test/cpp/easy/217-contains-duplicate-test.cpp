#include "easy/217-contains-duplicate.h"

#include "gtest/gtest.h"

TEST(ContainsDuplicate, FirstExample) {
  std::vector<int> nums{1,2,3,1};
  leetcode::ContainsDuplicate solution;
  bool expected{true};
  ASSERT_EQ(expected, solution.containsDuplicate(nums));
}
