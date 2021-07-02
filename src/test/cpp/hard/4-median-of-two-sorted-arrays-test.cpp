#include "hard/4-median-of-two-sorted-arrays.h"

#include "gtest/gtest.h"

TEST(MedianOfTwoSortedArrays, FourthExample) {
  std::vector<int> nums1{};
  std::vector<int> nums2{1};
  leetcode::MedianOfTwoSortedArrays solution;
  ASSERT_EQ(1.0, solution.findMedianSortedArrays(nums1, nums2));
}
