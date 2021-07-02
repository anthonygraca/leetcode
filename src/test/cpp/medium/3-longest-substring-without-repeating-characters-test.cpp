#include "medium/3-longest-substring-without-repeating-characters.h"

#include "gtest/gtest.h"

#include <string>
#include <vector>

TEST(LongestSubstringWithoutRepeatingCharacters, FirstExample) {
  std::string input{"abcabcbb"};
  leetcode::LongestSubstring solution;
  ASSERT_EQ(3, solution.lengthOfLongestSubstring(input));
}

TEST(LongestSubstringWithoutRepeatingCharacters, SecondExample) {
  std::string input{"bbbbb"};
  leetcode::LongestSubstring solution;
  ASSERT_EQ(1, solution.lengthOfLongestSubstring(input));
}

TEST(LongestSubstringWithoutRepeatingCharacters, ThirdExample) {
  std::string input{"pkwwkew"};
  leetcode::LongestSubstring solution;
  ASSERT_EQ(3, solution.lengthOfLongestSubstring(input));
}
