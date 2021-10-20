#ifndef LEETCODE_MEDIUM_46_PERMUTATIONS_H_
#define LEETCODE_MEDIUM_46_PERMUTATIONS_H_

#include <vector>

namespace leetcode {
class Permutation {
public:
  std::vector<std::vector<int>> permute(std::vector<int>& nums) {
    permute(nums, nums.size());
    return solution;
  }
  void permute(std::vector<int>& nums, int k) {
    if (k == 1) solution.push_back(std::vector{nums});
    else {
      permute(nums, k-1);

      for(int i = 0; i < k-1; i++) {
        if (k % 2 == 0) {
          std::swap(nums[i], nums[k-1]);
        }
        else {
          std::swap(nums[0], nums[k-1]);
        }
        permute(nums, k-1);
      }
    }
  }
private:
  std::vector<std::vector<int>> solution;
};
}

#endif
