#include "medium/424-longest-repeating-character-replacement.h"

#include "gtest/gtest.h"

#include <string>

// Replace the two 'A's with two 'B's or vice versa.
TEST(LongestRepeatingCharacterReplacement, FirstExample) {
  std::string s{"ABAB"};
  int k{2};
  leetcode::LongestRepeatingCharacterReplacement algo;
  ASSERT_EQ(4, algo.characterReplacement(s, k));
}


/*
 Replace the one 'A' in the middle with 'B' and form "AABBBBA".
 The substring "BBBB" has the longest repeating letters, which is 4.
 */
TEST(LongestRepeatingCharacterReplacement, SecondExample) {
  std::string s{"AABABBA"};
  int k{1};
  leetcode::LongestRepeatingCharacterReplacement algo;
  ASSERT_EQ(4, algo.characterReplacement(s, k));
}
