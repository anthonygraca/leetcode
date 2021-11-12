#ifndef LEETCODE_MEDIUM_57_INSERT_INTERVAL_H_
#define LEETCODE_MEDIUM_57_INSERT_INTERVAL_H_

#include <vector>

namespace leetcode {
class InsertInterval {
  public:
    std::vector<std::vector<int>> insert(
        std::vector<std::vector<int>>& intervals, 
        std::vector<int>& new_interval) {
      std::vector<std::vector<int>> solution; 
      int i = 0;
      while (i < intervals.size() && intervals[i][1] < new_interval[0]) {
        solution.push_back(intervals[i]);
        i++;
      }
      while (i < intervals.size() && intervals[i][0] <= new_interval[1]) {
        new_interval = merge_interval(intervals[i], new_interval);
        i++;
      }
      solution.push_back(new_interval);
      while (i < intervals.size()) {
        solution.push_back(intervals[i]);
        i++;
      }
      return solution;
    }

    std::vector<int> merge_interval(
        std::vector<int>& interval, std::vector<int>& new_interval) {
      int a = std::min(interval[0], new_interval[0]);
      int b = std::max(interval[1], new_interval[1]);
      return {a,b};
    }
};
} // namespace leetcode

#endif
