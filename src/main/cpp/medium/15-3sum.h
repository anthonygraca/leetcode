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

#include <algorithm>
#include <set>
#include <vector>

namespace leetcode {
class ThreeSum {
  public:
  std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
    std::vector<std::vector<int>> triplets;
    std::set<std::vector<int>> seen;
    if (nums.size() < 3) return triplets;
    std::sort(nums.begin(), nums.end()); // runs at O(nlogn)
    for (int i = 0; i < nums.size() - 2; i++) {
      int a = nums[i];
      int start = i + 1;
      int end = nums.size() - 1;
      while (start < end) {
        int b = nums[start];
        int c = nums[end];
        if (a + b + c == 0) {
          std::vector<int> candidate{a,b,c};
          if (seen.find(candidate) == seen.end()) {
            triplets.push_back(candidate);
            seen.insert(candidate);
          }
          start = start + 1;
          end = end - 1;
        }
        else if (a + b + c > 0) {
          end = end - 1;
        }
        else {
          start = start + 1;
        }
      }
    }
    return triplets;
  }
};
} // namespace leetcode

#endif
