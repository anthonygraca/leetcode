#include "easy/997-find-the-town-judge.h"

#include <cstdint>
#include <vector>

#include "gtest/gtest.h"

TEST(FindTheTownJudge, FirstExample) {
  std::uint16_t people = 2;
  std::vector<std::vector<std::int64_t>> trust{{1, 2}};
  leetcode::FindTheTownJudge findTheTownJudge;
  ASSERT_EQ(findTheTownJudge.findJudge(people, trust), 2);
}

TEST(FindTheTownJudge, SecondExample) {
  std::uint16_t people = 3;
  std::vector<std::vector<std::int64_t>> trust{{1, 3}, {2, 3}};
  leetcode::FindTheTownJudge findTheTownJudge;
  ASSERT_EQ(findTheTownJudge.findJudge(people, trust), 3);
}

TEST(FindTheTownJudge, ThirdExample) {
  std::uint16_t people = 3;
  std::vector<std::vector<std::int64_t>> trust{{1, 3}, {2, 3}, {3, 1}};
  leetcode::FindTheTownJudge findTheTownJudge;
  ASSERT_EQ(findTheTownJudge.findJudge(people, trust), -1);
}