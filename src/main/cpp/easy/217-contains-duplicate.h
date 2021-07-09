#ifndef LEETCODE_EASY_217_CONTAINS_DUPLICATE_H_
#define LEETCODE_EASY_217_CONTAINS_DUPLICATE_H_

/*
  Given an integer array nums, return true if any value appears at least twice 
  in the array, and return false if every element is distinct.

  Constraints:
   * 1 <= nums.length <= 10^5
   * -10^9 <= nums[i] <= 10^9
 */

#include <unordered_set>
#include <vector>

namespace leetcode {
class ContainsDuplicate {
public:
  bool containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> hashset;
    for (auto num : nums) {
      if (hashset.find(num) == hashset.end()) {
        hashset.insert(num);
      }
      else {
        return true;
      }
    }
    return false;
  }
};
} // namespace leetcode

#endif
