#ifndef LEETCODE_EASY_594_LONGEST_HARMONIOUS_SUBSEQUENCE_H_
#define LEETCODE_EASY_594_LONGEST_HARMONIOUS_SUBSEQUENCE_H_

#include <unordered_map>
#include <vector>

namespace leetcode {
class LongestHarmoniousSubsequence {
public:
  int findLHS(std::vector<int>& nums) {
    std::unordered_map<int, int> map;
    int longest_length{0};
    for (auto num : nums) {
      if (map.find(num) == map.end()) {
        map[num] = 1;
      }
      else {
        map[num]++;
      }
      if (map.find(num-1) != map.end()) {
        longest_length = std::max(map[num] + map[num-1], longest_length);
      }
      if (map.find(num+1) != map.end()) {
        longest_length = std::max(map[num] + map[num+1], longest_length);
      }
    }
    return longest_length;
  }
}; 
} // namespace leetcode

#endif
