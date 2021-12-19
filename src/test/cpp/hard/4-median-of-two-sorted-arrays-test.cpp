#include "hard/4-median-of-two-sorted-arrays.h"

#include <cstdint>
#include <vector>

#include "gtest/gtest.h"

TEST(MedianOfTwoSortedArrays, FirstExample) {
  std::vector<std::int64_t> nums1{1, 3};
  std::vector<std::int64_t> nums2{2};
  leetcode::MedianOfTwoSortedArrays solution;
  ASSERT_EQ(2.0, solution.findMedianSortedArrays(nums1, nums2));
}

TEST(MedianOfTwoSortedArrays, SecondExample) {
  std::vector<std::int64_t> nums1{1, 2};
  std::vector<std::int64_t> nums2{3, 4};
  leetcode::MedianOfTwoSortedArrays solution;
  ASSERT_EQ(2.5, solution.findMedianSortedArrays(nums1, nums2));
}

TEST(MedianOfTwoSortedArrays, ThirdExample) {
  std::vector<std::int64_t> nums1{0, 0};
  std::vector<std::int64_t> nums2{0, 0};
  leetcode::MedianOfTwoSortedArrays solution;
  ASSERT_EQ(0, solution.findMedianSortedArrays(nums1, nums2));
}

TEST(MedianOfTwoSortedArrays, FourthExample) {
  std::vector<std::int64_t> nums1{};
  std::vector<std::int64_t> nums2{1};
  leetcode::MedianOfTwoSortedArrays solution;
  ASSERT_EQ(1.0, solution.findMedianSortedArrays(nums1, nums2));
}

TEST(MedianOfTwoSortedArrays, FifthExample) {
  std::vector<std::int64_t> nums1{2};
  std::vector<std::int64_t> nums2{};
  leetcode::MedianOfTwoSortedArrays solution;
  ASSERT_EQ(2.0, solution.findMedianSortedArrays(nums1, nums2));
}
