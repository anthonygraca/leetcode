#include "medium/75-sort-colors.h"

#include "gtest/gtest.h"

#include <vector>

TEST(SortColors, FirstExample) {
  std::vector<int> input{2,0,2,1,1,0};
  leetcode::SortColors algo;
  algo.sort(input);
  std::vector<int> expected{0,0,1,1,2,2};
  ASSERT_EQ(expected, input);
}

TEST(SortColors, SecondExample) {
  std::vector<int> input{2,0,1};
  leetcode::SortColors algo;
  algo.sort(input);
  std::vector<int> expected{0,1,2};
  ASSERT_EQ(expected, input);
}

TEST(SortColors, ThirdExample) {
  std::vector<int> input{0};
  leetcode::SortColors algo;
  algo.sort(input);
  std::vector<int> expected{0};
  ASSERT_EQ(expected, input);
}

TEST(SortColors, FourthExample) {
  std::vector<int> input{1};
  leetcode::SortColors algo;
  algo.sort(input);
  std::vector<int> expected{1};
  ASSERT_EQ(expected, input);
}
