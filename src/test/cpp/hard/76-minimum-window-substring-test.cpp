#include "hard/76-minimum-window-substring.h"

#include "gtest/gtest.h"

#include <string>

// The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.
TEST(MinimumWindowSubstring, DISABLED_FirstExample) {
  std::string s{"ADOBECODEBANC"};
  std::string t{"ABC"};
  leetcode::MinimumWindowSubstring algo;
  ASSERT_EQ("BANC", algo.minWindow(s, t));
}

// The entire string s is the minimum window.
TEST(MinimumWindowSubstring, DISABLED_SecondExample) {
  std::string s{"a"};
  std::string t{"a"};
  leetcode::MinimumWindowSubstring algo;
  ASSERT_EQ("a", algo.minWindow(s, t));
}

// Both 'a's from t must be included in the window.
// Since the largest window of s only has one 'a', return empty string.
TEST(MinimumWindowSubstring, DISABLED_ThirdExample) {
  std::string s{"a"};
  std::string t{"aa"};
  leetcode::MinimumWindowSubstring algo;
  ASSERT_EQ("", algo.minWindow(s, t));
}
