#ifndef LEETCODE_EASY_1_TWO_SUM_H_
#define LEETCODE_EASY_1_TWO_SUM_H_

/*
  Given an array of integers nums and an integer target, return indices of the 
  two numbers such that they add up to target.

  You may assume that each input would have exactly one solution, and you may 
  not use the same element twice.

  You can return the answer in any order.

  Constraints:

  * 2 <= nums.length <= 104
  * -109 <= nums[i] <= 109
  * -109 <= target <= 109
  Only one valid answer exists.
*/

#include <unordered_map>
#include <utility>
#include <vector>

namespace leetcode {
class TwoSum {
  public:
  std::vector<int> twoSum(std::vector<int> nums, int target) {
    std::vector<int> answer;
    std::unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++) {
      int desired_num = target - nums[i];
      if (map.find(desired_num) == std::end(map)) {
        map.insert(std::make_pair(nums[i], i));
      }
      else {
	answer.push_back(map.find(desired_num)->second);
        answer.push_back(i);
	return answer;
      }
    }
    return answer;
  };
};
} // namespace leetcode

#endif
