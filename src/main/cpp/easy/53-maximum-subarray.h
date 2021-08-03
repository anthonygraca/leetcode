#ifndef LEETCODE_EASY_53_MAXIMUM_SUBARRAY_H_
#define LEETCODE_EASY_53_MAXIMUM_SUBARRAY_H_

/*
  Given an integer array nums, find the contiguous subarray (containing at 
  least one number) which has the largest sum and return its sum.

  Constraints:
   * 1 <= nums.length <= 3 * 10^4
   * -10^5 <= nums[i] <= 10^5
   
   Follow up: If you have figured out the O(n) solution, try coding another 
              solution using the divide and conquer approach, which is more 
              subtle.
 */

#include <vector>
#include <limits>

namespace leetcode {
class MaximumSubarray {
public:
  int maxSubArray(std::vector<int>& nums) {
    return maxSubArray(nums, 0, nums.size()-1);
  }
  int maxSubArray(std::vector<int>& nums, int low, int high) {
    if (!(high == low)) { 
      int mid = (low + high)/2;
      int left_sum = maxSubArray(nums, low, mid);
      int right_sum = maxSubArray(nums, mid + 1, high);
      int cross_sum = maxCrossingSubarray(nums, low, high);
      if (left_sum >= right_sum && left_sum >= cross_sum) return left_sum;
      else if (right_sum >= left_sum && right_sum >= cross_sum) return right_sum;
      else return cross_sum;
    }
    return nums[low]; // base case: only 1 element

  }
  int maxCrossingSubarray(std::vector<int>& nums, int low, int high) {
    int left_sum = std::numeric_limits<int>::min();
    int sum = 0;
    int mid = (low + high)/2;
    for (int i = mid; i >= low; i--) {
      sum += nums[i];
      if (sum > left_sum) left_sum = sum;
    }
    int right_sum = std::numeric_limits<int>::min();
    sum = 0;
    for (int i = mid + 1; i <= high; i++) {
      sum += nums[i];
      if (sum > right_sum) right_sum = sum;
    }
    return left_sum + right_sum;
  }

  int maxSubArrayMichelle(std::vector<int>& nums) {
    int global_max = std::numeric_limits<int>::min();
    int curr_max = 0;
    for (int i = 0; i < nums.size(); i++) {
      curr_max += nums[i];
      global_max = std::max(global_max, curr_max);
      if(curr_max < 0) {
        curr_max = 0;
      }
    }
    return global_max;
  }
};
} // namespace leetcode

#endif
