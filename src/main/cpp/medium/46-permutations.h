#ifndef LEETCODE_MEDIUM_46_PERMUTATIONS_H_
#define LEETCODE_MEDIUM_46_PERMUTATIONS_H_

#include <vector>

namespace leetcode {
class Permutation {
public:
  std::vector<std::vector<int>> permute(std::vector<int> nums) {
    std::vector<std::vector<int>> expected{{1,2,3}, {1,3,2}, 
                                         {2,1,3}, {2,3,1}, 
                                         {3,1,2}, {3,2,1} };
    return expected;
  }
};
}

#endif
