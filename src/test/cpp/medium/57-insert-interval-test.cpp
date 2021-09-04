#include "medium/57-insert-interval.h"

#include "gtest/gtest.h"

TEST(InsertInterval, FirstExample) {
  std::vector<std::vector<int>> intervals{{1,3}, {6,9}}; 
  std::vector<int> new_interval{2,5};
  leetcode::InsertInterval solution;
  std::vector<std::vector<int>> expected{{1,3}, {6,9}}; 
  ASSERT_EQ(expected, solution.insert(intervals, new_interval));
}
