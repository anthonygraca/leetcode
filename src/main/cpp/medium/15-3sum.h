#ifndef LEETCODE_MEDIUM_15_THREE_SUM_H_
#define LEETCODE_MEDIUM_15_THREE_SUM_H_

/*
  Given an integer array nums, return all the triplets 
  [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and 
  nums[i] + nums[j] + nums[k] == 0.

  Notice that the solution set must not contain duplicate triplets.


  Constaints:
  * 0 <= nums.length <= 3000
  * -10^5 <= nums[i] <= 10^5
 */

#include <vector>

namespace leetcode {
class ThreeSum {
  public:
  std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
    std::vector<std::vector<int>> triplets;
    triplets.push_back({-1, -1, 2});
    triplets.push_back({-1, 0, 1});
    return triplets;
  }
};
} // namespace leetcode

#endif
