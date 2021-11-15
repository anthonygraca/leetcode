#ifndef LEETCODE_MEDIUM_75_SORT_COLORS_H_
#define LEETCODE_MEDIUM_75_SORT_COLORS_H_

/*
  Given an array nums with n objects colored red, white, or blue, sort them 
  in-place so that objects of the same color are adjacent, with the colors in 
  the order red, white, and blue.

  We will use the integers 0, 1, and 2 to represent the color red, white, and 
  blue, respectively.

  You must solve this problem without using the library's sort function.


  Constraints:
  * n == nums.size()
  * 1 <= n <= 300
  * nums[i] is 0, 1, or 2.
 */

#include <vector>

namespace leetcode {
class SortColors {
public:
  void sort(std::vector<int>& input) {
    int smaller = 0;
    int middle = 0;
    int bigger = input.size() - 1;
    while (middle <= bigger) {
      if (input[middle] < 1) {
        std::swap(input[smaller], input[middle]);
        smaller++;
        middle++;
      }
      else if (input[middle] == 1) {
        middle++;
      }
      else { //input[middle] > 1
        std::swap(input[middle], input[bigger]);
        bigger--;
      }
    }
  }
};
} // namespace leetcode

#endif
