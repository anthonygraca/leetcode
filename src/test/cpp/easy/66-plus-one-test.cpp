#include "easy/66-plus-one.h"

#include "gtest/gtest.h"

#include <vector>

TEST(PlusOne, FirstExample) {
  std::vector<int> input{1,2,3};
  leetcode::PlusOne algo;
  std::vector<int> expected{1,2,4};
  ASSERT_EQ(expected, algo.plusOne(input));
}

TEST(PlusOne, SecondExample) {
  std::vector<int> input{4,3,2,1};
  leetcode::PlusOne algo;
  std::vector<int> expected{4,3,2,2};
  ASSERT_EQ(expected, algo.plusOne(input));
}

TEST(PlusOne, ThirdExample) {
  std::vector<int> input{0};
  leetcode::PlusOne algo;
  std::vector<int> expected{1};
  ASSERT_EQ(expected, algo.plusOne(input));
}

TEST(PlusOne, FourthExample) {
  std::vector<int> input{9};
  leetcode::PlusOne algo;
  std::vector<int> expected{1, 0};
  ASSERT_EQ(expected, algo.plusOne(input));
}

TEST(PlusOne, FifthExample) {
  std::vector<int> input{9,9};
  leetcode::PlusOne algo;
  std::vector<int> expected{1, 0, 0};
  ASSERT_EQ(expected, algo.plusOne(input));
}

TEST(PlusOne, SixthExample) {
  std::vector<int> input{1, 9,9};
  leetcode::PlusOne algo;
  std::vector<int> expected{2, 0, 0};
  ASSERT_EQ(expected, algo.plusOne(input));
}
