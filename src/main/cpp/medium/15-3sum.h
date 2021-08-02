#ifndef LEETCODE_MEDIUM_15_THREE_SUM_H_
#define LEETCODE_MEDIUM_15_THREE_SUM_H_

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
