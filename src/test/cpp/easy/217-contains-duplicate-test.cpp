#include "easy/217-contains-duplicate.h"

#include "gtest/gtest.h"

TEST(ContainsDuplicate, FirstExample) {
  std::vector<int> nums{1,2,3,1};
  leetcode::ContainsDuplicate solution;
  ASSERT_TRUE(solution.containsDuplicate(nums));
}

TEST(ContainsDuplicate, SecondExample) {
  std::vector<int> nums{1,2,3,4};
  leetcode::ContainsDuplicate solution;
  ASSERT_FALSE(solution.containsDuplicate(nums));
}

TEST(ContainsDuplicate, ThirdExample) {
  std::vector<int> nums{1,1,1,3,3,4,3,2,4,2};
  leetcode::ContainsDuplicate solution;
  ASSERT_TRUE(solution.containsDuplicate(nums));
}
