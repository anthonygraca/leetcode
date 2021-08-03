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
#include <cmath>
#include <limits>

namespace leetcode {
class MaximumProductSubarray {
public:
  int maxProduct(std::vector<int>& nums) {
    return maxProduct(nums, 0, nums.size()-1);
  }
  int maxProduct(std::vector<int>& nums, int low, int high) {
    if (!(high == low)) { 
      int mid = (low + high)/2;
      int left_prod = maxProduct(nums, low, mid);
      int right_prod = maxProduct(nums, mid + 1, high);
      int cross_sum = maxCrossingSubarray(nums, low, high);
      if (left_prod >= right_prod && left_prod >= cross_sum) return left_prod;
      else if (right_prod >= left_prod && right_prod >= cross_sum) return right_prod;
      else return cross_sum;
    }
    return nums[low]; // base case: only 1 element
  }
  int maxCrossingSubarray(std::vector<int>& nums, int low, int high) {
    int left_prod = std::numeric_limits<int>::min();
    int prod = 1;
    int mid = (low + high)/2;
    for (int i = mid; i >= low; i--) {
      prod *= nums[i];
      if (prod > left_prod) left_prod = prod;
    }
    int right_prod = std::numeric_limits<int>::min();
    prod = 1;
    for (int i = mid + 1; i <= high; i++) {
      prod *= nums[i];
      if (std::abs(prod) > right_prod) right_prod = prod;
    }
    return left_prod * right_prod;
  }
};
} // namespace leetcode

#endif
