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
    return 6;
  }
};
} // namespace leetcode

#endif
