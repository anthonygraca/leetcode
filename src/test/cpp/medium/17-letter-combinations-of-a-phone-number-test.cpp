#include "medium/17-letter-combinations-of-a-phone-number.h"

#include "gtest/gtest.h"

TEST(LetterCombinationsOfAPhoneNumber, FirstExample) {
  std::string digits{"23"};
  leetcode::LetterCombinationsOfAPhoneNumber solution;
  std::vector<std::string> expected{"ad","ae","af","bd","be","bf","cd","ce","cf"};
  ASSERT_EQ(expected, solution.letterCombinations(digits));
}

/*
TEST(LetterCombinationsOfAPhoneNumber, SecondExample) {
  std::string digits{""};
  leetcode::LetterCombinationsOfAPhoneNumber solution;
  std::vector<std::string> expected;
  ASSERT_EQ(expected, solution.letterCombinations(digits));
}

TEST(LetterCombinationsOfAPhoneNumber, ThirdExample) {
  std::string digits{"2"};
  leetcode::LetterCombinationsOfAPhoneNumber solution;
  std::vector<std::string> expected{"a","b","c"};
  ASSERT_EQ(expected, solution.letterCombinations(digits));
}
*/
