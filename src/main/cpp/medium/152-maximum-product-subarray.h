#ifndef LEETCODE_MEDIUM_152_MAXIMUM_PRODUCT_SUBARRAY_H_
#define LEETCODE_MEDIUM_152_MAXIMUM_PRODUCT_SUBARRAY_H_

/*
  Given an integer array nums, find a contiguous non-empty subarray within the 
  array that has the largest product, and return the product.

  It is guaranteed that the answer will fit in a 32-bit integer.

  A subarray is a contiguous subsequence of the array.


  Constraints:
   * 1 <= nums.length <= 2 * 10^4
   * -10 <= nums[i] <= 10
   * The product of any prefix or suffix of nums is guaranteed to fit in a 
     32-bit integer.
 */

#include <vector>

namespace leetcode {
class MaximumProductSubarray {
public:
  int maxProduct(std::vector<int>& nums) {
    return maxProduct(nums, 0, nums.size()-1);
  }
  int maxProduct(std::vector<int>& nums, int low, int high) {
    if (!(high == low)) { 
      int mid = (low + high)/2;
      int left_sum = maxProduct(nums, low, mid);
      int right_sum = maxProduct(nums, mid + 1, high);
      int cross_sum = maxCrossingSubarray(nums, low, high);
      if (left_sum >= right_sum && left_sum >= cross_sum) return left_sum;
      else if (right_sum >= left_sum && right_sum >= cross_sum) return right_sum;
      else return cross_sum;
    }
    return nums[low]; // base case: only 1 element

  }
  int maxCrossingSubarray(std::vector<int>& nums, int low, int high) {
    int left_sum = INT_MIN;
    int sum = 1;
    int mid = (low + high)/2;
    for (int i = mid; i >= low; i--) {
      sum *= nums[i];
      if (sum > left_sum) left_sum = sum;
    }
    int right_sum = INT_MIN;
    sum = 1;
    for (int i = mid + 1; i <= high; i++) {
      sum *= nums[i];
      if (sum > right_sum) right_sum = sum;
    }
    return left_sum * right_sum;
  }
};
} // namespace leetcode

#endif
