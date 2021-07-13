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

  Noteworthy:
   * Initialize a vector of a specific size with a default value

  Notes:
    nums = [1, 2, 3, 4]
    left = [1, 1, 2, 6]
    right =[24, 12, 4, 1]
    ans = [24, 12, 8, 6]

  In-place solution:
       nums = [1, 2, 3, 4]
    1.) ans = [1, 1, 2, 6]
    2.) ans = [24, 12, 8, 6]
 */

#include <vector>

namespace leetcode {
class ProductOfArrayExceptSelf {
public:
  std::vector<int> productExceptSelf(std::vector<int>& nums) {
    int size = nums.size();
    std::vector<int> answer(size, 1); 
    for (int i = 1; i < size; i++) {
      answer[i] = answer[i-1] * nums[i-1];
    }
    int product = 1;
    for (int i = size-2; i >= 0; i--) {
      product *= nums[i+1];
      answer[i] = answer[i] * product;
    }
    return answer;
  }
};
} // namespace leetcode

#endif

