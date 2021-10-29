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
#include <string>
#include <unordered_set>

namespace leetcode {
class LongestSubstring {
  public:
    int lengthOfLongestSubstring(std::string s) {
      auto longest_length{0};
      int i = 0; int j = 0;
      std::unordered_set<char> lookup;
      for (auto ch: s) {
        while (lookup.find(ch) != lookup.end()) {
          lookup.erase(s[i++]);
        }
        lookup.insert(ch);
        j++;
        longest_length = std::max(longest_length, j-i);
      }
      return longest_length;
    }
};
} // namespace leetcode

#endif
