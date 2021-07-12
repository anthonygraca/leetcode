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
 */

#include <vector>

namespace leetcode {
class ProductOfArrayExceptSelf {
public:
  std::vector<int> productExceptSelf(std::vector<int>& nums) {
    // initialize a vector of size nums.size() w/ default value of 1
    int size = nums.size();
    std::vector<int> left_side(size, 1); 
    std::vector<int> right_side(size, 1); 
    std::vector<int> answer(size, 1); 
    for (int i = 0; i < size; i++) {
      if (i == 0) {
        left_side[0] = nums[0];
      }
      else {
        left_side[i] = left_side[i-1] * nums[i];
      }
    }
    for (int i = size-1; i >= 0; i--) {
      if (i == size-1) {
        right_side[size-1] = nums[size-1];
      }
      else {
        right_side[i] = right_side[i+1] * nums[i];
      }
    }
    for (int i = 0; i < size; i++) {
      if (i == 0) {
        answer[0] = right_side[1];
      }
      else if (i == size-1) {
        answer[size-1] = left_side[size-2];
      }
      else {
        answer[i] = left_side[i-1] * right_side[i+1];
      }
    }
    return answer;
  }
};
} // namespace leetcode

#endif

