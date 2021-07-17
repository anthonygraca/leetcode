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
    int low = 0;
    int high = nums.size() - 1;

    while (low < high) {
      int mid = low + (low - high) / 2;
      if (nums[mid] < nums[high]) {
        high = mid;
      }
      else {
        low = mid;
      }
    }
    return nums[low];
  }
};

} // namespace leetcode

#endif
