#include "easy/836-rectangle-overlap.h"

#include "gtest/gtest.h"

#include <vector>

TEST(RectangleOverlap, FirstExample) {
  std::vector<int> r1{0,0,2,2};
  std::vector<int> r2{1,1,3,3};
  leetcode::RectangleOverlap algo;
  ASSERT_TRUE(algo.isOverlap(r1,r2));
}

TEST(RectangleOverlap, SecondExample) {
  std::vector<int> r1{0,0,1,1};
  std::vector<int> r2{1,0,2,1};
  leetcode::RectangleOverlap algo;
  ASSERT_FALSE(algo.isOverlap(r1,r2));
}

TEST(RectangleOverlap, ThirdExample) {
  std::vector<int> r1{0,0,1,1};
  std::vector<int> r2{2,2,3,3};
  leetcode::RectangleOverlap algo;
  ASSERT_FALSE(algo.isOverlap(r1,r2));
}
