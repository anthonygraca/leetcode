#include "medium/57-insert-interval.h"

#include "gtest/gtest.h"

TEST(InsertInterval, FirstExample) {
  std::vector<std::vector<int>> intervals{{1,3}, {6,9}}; 
  std::vector<int> new_interval{2,5};
  leetcode::InsertInterval solution;
  std::vector<std::vector<int>> expected{{1,5}, {6,9}}; 
  ASSERT_EQ(expected, solution.insert(intervals, new_interval));
}

TEST(InsertInterval, SecondExample) {
  std::vector<std::vector<int>> intervals{{1,2}, {3,5}, {6,7}, {8,10}, {12,16}}; 
  std::vector<int> new_interval{4,8};
  leetcode::InsertInterval solution;
  std::vector<std::vector<int>> expected{{1,2}, {3,10}, {12,16}}; 
  ASSERT_EQ(expected, solution.insert(intervals, new_interval));
}

TEST(InsertInterval, ThirdExample) {
  std::vector<std::vector<int>> intervals; 
  std::vector<int> new_interval{5,7};
  leetcode::InsertInterval solution;
  std::vector<std::vector<int>> expected{{5,7}}; 
  ASSERT_EQ(expected, solution.insert(intervals, new_interval));
}

TEST(InsertInterval, FourthExample) {
  std::vector<std::vector<int>> intervals{{1,5}}; 
  std::vector<int> new_interval{2,3};
  leetcode::InsertInterval solution;
  std::vector<std::vector<int>> expected{{1,5}}; 
  ASSERT_EQ(expected, solution.insert(intervals, new_interval));
}

TEST(InsertInterval, FifthExample) {
  std::vector<std::vector<int>> intervals{{1,5}}; 
  std::vector<int> new_interval{2,7};
  leetcode::InsertInterval solution;
  std::vector<std::vector<int>> expected{{1,7}}; 
  ASSERT_EQ(expected, solution.insert(intervals, new_interval));
}
