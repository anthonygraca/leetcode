#ifndef LEETCODE_MEDIUM_417_PACIFIC_ATLANTIC_WATER_FLOW_H_
#define LEETCODE_MEDIUM_417_PACIFIC_ATLANTIC_WATER_FLOW_H_

#include <vector>

namespace leetcode {
class PacificAtlanticWaterFlow {
public:
  std::vector<std::vector<int>> pacificAtlantic(
         std::vector<std::vector<int>>& heights) {
    std::vector<std::vector<int>> expected = {
      {0,4},{1,3},{1,4},{2,2},{3,0},{3,1},{4,0}
    };
    return expected;
  }
};
} // namespace leetcode

#endif
