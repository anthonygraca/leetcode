#ifndef LEETCODE_MEDIUM_3_LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H_
#define LEETCODE_MEDIUM_3_LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H_

/*
  Given a string s, find the length of the longest substring without repeating 
  characters.

  Constraints:

  * 0 <= s.length <= 5 * 104
  * s consists of English letters, digits, symbols and spaces.
*/

#include <algorithm>
#include <deque>
#include <string>

namespace leetcode {
class LongestSubstring {
  public:
    int lengthOfLongestSubstring(std::string s) {
      std::deque<char> q; 
      int longest_length = 0;
      for (int i = 0; i < s.length(); i++) {
        while (std::find(q.begin(), q.end(), s[i]) != q.end()) {
          q.pop_front();
        }
        q.push_back(s[i]);
	longest_length = max(longest_length, q.size());
      }
      return longest_length;
    }
    int max(int a, int b) { return (a > b) ? a : b; };
};
} // namespace leetcode

#endif
