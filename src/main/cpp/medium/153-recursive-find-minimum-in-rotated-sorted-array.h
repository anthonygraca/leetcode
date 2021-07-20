#ifndef LEETCODE_MEDIUM_153_RECURSIVE_FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_H_
#define LEETCODE_MEDIUM_153_RECURSIVE_FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_H_

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

class RecursiveFindMinimumInRotatedSortedArray {
public:
  int findMin(std::vector<int>& nums) {
    if (nums.size() == 1) return nums[0]; // trivial case, only 1 element
    int low = 0;
    int high = nums.size() - 1;
    if (nums[low] < nums[high]) return nums[low]; // handle non-rotated case
    return findRotatedSeam(nums, low, high);
  }

  int findRotatedSeam(std::vector<int>& nums, int low, int high) {
    int mid = low + (high - low) / 2;
    if (high - low == 1) return nums[high]; // base case: can't divide anymore
    if (nums[mid] < nums[high]) {
      return findRotatedSeam(nums, low, mid);
    }
    return findRotatedSeam(nums, mid, high);
  }
};

} // namespace leetcode

#endif
