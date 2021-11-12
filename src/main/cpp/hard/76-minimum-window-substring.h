#ifndef LEETCODE_HARD_76_MINIMUM_WINDOW_SUBSTRING_H_
#define LEETCODE_HARD_76_MINIMUM_WINDOW_SUBSTRING_H_

/*
 Given two strings s and t of lengths m and n respectively, return the minimum 
 window substring of s such that every character in t (including duplicates) 
 is included in the window. If there is no such substring, return the empty 
 string "".

 The testcases will be generated such that the answer is unique.

 A substring is a contiguous sequence of characters within the string.


 Constraints:
 * m == s.length
 * n == t.length
 * 1 <= m, n <= 105
 * s and t consist of uppercase and lowercase English letters.
 */

#include <algorithm>
#include <queue>
#include <string>
#include <unordered_set>
#include <unordered_map>

namespace leetcode {
class MinimumWindowSubstring {
public:
  std::string minWindow(std::string& s, std::string& t) {
    if (t.size() > s.size()) return "";
    std::unordered_map<char, int> map_t;
    int count_t{0};
    for (char c : t) {
      map_t[c]++;
      count_t++;
    }
    std::unordered_map<char, int> map_s;
    int i = 0; int j = 0;
    int count_s{0};
    std::string ss;
    for (char c : s) {
      j++;
      if (map_t[c] > 0) {
        map_s[c]++;
        count_s++;
      }
      while(map_t[s[i]] == 0) {
        i++;
      }
      while(map_s[s[i]] > map_t[s[i]]) {
        i++;
        map_s[s[i]]--;
        count_s--;
        while (map_t.find(s[i]) == map_t.end()) {
          i++;
        }
      }
      if (count_s == count_t) {
        ss = s.substr(i, j-i);
      }
    }
    return ss;
    //return "BANC";
  }

  bool isSuperset(std::unordered_set<char>& set, std::string& t) {
    for (char c : t) {
      if (set.find(c) == set.end()) {
        return false;
      }
    }
    return true;
  }
};


} // namespace leetcode

#endif
