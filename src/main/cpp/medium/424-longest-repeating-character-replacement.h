#ifndef LEETCODE_MEDIUM_424_LONGEST_REPEATING_CHARACTER_REPLACEMENT_H_
#define LEETCODE_MEDIUM_424_LONGEST_REPEATING_CHARACTER_REPLACEMENT_H_

/*
 You are given a string s and an integer k. You can choose any character of 
 the string and change it to any other uppercase English character. You can 
 perform this operation at most k times.

 Return the length of the longest substring containing the same letter you can 
 get after performing the above operations.

 Constraints:
 * 1 <= s.length <= 10^5
 * s consists of only uppercase English letters.
 * 0 <= k <= s.length
 */

#include <queue>
#include <string>
#include <unordered_map>

namespace leetcode {
class LongestRepeatingCharacterReplacement {
public:
  int characterReplacement(std::string& s, int k) {
    std::queue<char> window;
    std::unordered_map<char, int> map;
    int longest_length = -1;
    /* 
     * dominant_term means the highest character that occupies the window
     */
    int dominant_term = -1;
    for (auto ch : s) {
      window.push(ch);
      map[ch]++;
      dominant_term = std::max(dominant_term, map[ch]);
      while (window.size() - dominant_term > k) {
        map[window.front()]--;
        window.pop();
        dominant_term = std::max(dominant_term, map[ch]);
      }
      longest_length = std::max(longest_length, (int)window.size());
    }
    return longest_length;
  }
  int characterReplacementWithoutQueue(std::string& s, int k) {
    int i = 0; int j = 0; int size_of_window = 0;
    std::unordered_map<char, int> map;
    int longest_length = -1;
    int dominant_term = -1;
    for (auto ch : s) {
      j++;
      map[ch]++;
      dominant_term = std::max(dominant_term, map[ch]);
      while ((j-i) - dominant_term > k) {
        map[s[i]]--;
        i++;
        dominant_term = std::max(dominant_term, map[ch]);
      }
      longest_length = std::max(longest_length, (j-i));
    }
    return longest_length;
  }
}; 
} // namespace leetcode

#endif
