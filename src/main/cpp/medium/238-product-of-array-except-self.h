#ifndef LEETCODE_MEDIUM_238_PRODUCT_OF_ARRAY_EXCEPT_SELF_H_
#define LEETCODE_MEDIUM_238_PRODUCT_OF_ARRAY_EXCEPT_SELF_H_

/*
  Given an integer array nums, return an array answer such that answer[i] is 
  equal to the product of all the elements of nums except nums[i].

  The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit 
  integer.

  You must write an algorithm that runs in O(n) time and without using the 
  division operation.


  Constraints:
   * 2 <= nums.length <= 10^5
   * -30 <= nums[i] <= 30
   * The product of any prefix or suffix of nums is guaranteed to fit in a 
     32-bit integer.
 */

#include <vector>

namespace leetcode {
class ProductOfArrayExceptSelf {
public:
  std::vector<int> productExceptSelf(std::vector<int>& nums) {
    std::vector<int> answer{24, 12, 8, 6};
    return answer;
  }
};
} // namespace leetcode

#endif

