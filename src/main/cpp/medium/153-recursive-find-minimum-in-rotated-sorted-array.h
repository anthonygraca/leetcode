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
    return findMin(nums, low, high);
  }

  int findMin(std::vector<int>& nums, int low, int high) {
    int mid = low + (high - low) / 2;
    if (high - low == 1) return nums[high];
    if (nums[mid] < nums[high]) {
      return findMin(nums, low, mid);
    }
    return findMin(nums, mid, high);
  }

/*
    int low = 0;
    int high = nums.size() - 1;
    // while there is a rotation, throw away half of the array that is a 
    // strictly monotonic subsequence
    while (!(nums[low] < nums[high])) {
      // can't subdivide any further, return nums[high] since it's smaller
      if (high - low == 1) return nums[high];
      int mid = low + (high - low) / 2;
      if (nums[mid] < nums[high]) {
        high = mid;
      }
      else {
        low = mid;
      }
    }
    // we skipped while because no rotation. smallest element is nums[low]
    return nums[low];
*/
};

} // namespace leetcode

#endif
