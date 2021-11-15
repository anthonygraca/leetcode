#include "easy/9-palindrome-number.h"

#include "gtest/gtest.h"

TEST(PalindromeNumber, FirstExample) {
  leetcode::PalindromeNumber algo;
  ASSERT_TRUE(algo.isPalindrome(121));
}

TEST(PalindromeNumber, SecondExample) {
  leetcode::PalindromeNumber algo;
  ASSERT_FALSE(algo.isPalindrome(-121));
}

TEST(PalindromeNumber, ThirdExample) {
  leetcode::PalindromeNumber algo;
  ASSERT_FALSE(algo.isPalindrome(10));
}

TEST(PalindromeNumber, FourthExample) {
  leetcode::PalindromeNumber algo;
  ASSERT_FALSE(algo.isPalindrome(-101));
}

TEST(PalindromeNumber, FifthExample) {
  leetcode::PalindromeNumber algo;
  ASSERT_TRUE(algo.isPalindrome(1221));
}

TEST(PalindromeNumber, SixthExample) {
  leetcode::PalindromeNumber algo;
  ASSERT_FALSE(algo.isPalindrome(123421));
}

TEST(PalindromeNumber, SeventhExample) {
  leetcode::PalindromeNumber algo;
  ASSERT_FALSE(algo.isPalindrome(1000021));
}
