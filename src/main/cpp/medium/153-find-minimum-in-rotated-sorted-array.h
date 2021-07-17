#ifndef LEETCODE_MEDIUM_153_FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_H_
#define LEETCODE_MEDIUM_153_FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_H_

/*
  Suppose an array of length n sorted in ascending order is rotated between 1 
  and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

   * [4,5,6,7,0,1,2] if it was rotated 4 times.
   * [0,1,2,4,5,6,7] if it was rotated 7 times.
  Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results 
  in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

  Given the sorted rotated array nums of unique elements, return the minimum 
  element of this array.

  You must write an algorithm that runs in O(log n) time.


  Constraints:
   * n == nums.length
   * 1 <= n <= 5000
   * -5000 <= nums[i] <= 5000
   * All the integers of nums are unique.
   * nums is sorted and rotated between 1 and n times.
 */

#include <vector>

namespace leetcode {
class FindMinimumInRotatedSortedArray {
public:
  int findMin(std::vector<int>& nums) {
    return findMin(nums, 0, nums.size());
  }

  int findMin(std::vector<int>& nums, int low, int high) {
    if (high < low) return nums[low];

    int mid = low + (high - low) / 2;

    // handles something like 3, 4, 5, 1, 2
    if (mid < high && nums[mid + 1] < nums[mid]) {
      return nums[mid + 1];
    }
    if (low < mid && nums[mid] < nums[mid - 1]) {
      return nums[mid];
    }

    // rotation is on the left side
    if (nums[high] > nums[mid]) {
      return findMin(nums, low, mid-1);
    }
    // rotation is on the right side
    return findMin(nums, mid + 1, high);
  }
};

} // namespace leetcode

#endif
