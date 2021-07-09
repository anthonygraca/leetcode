# LeetCode Practice

## Why Practice?
1. Data Stuctures and Algorithms are important. [Old codebases can gain huge speedups](https://nee.lv/2021/02/28/How-I-cut-GTA-Online-loading-times-by-70/)
2. There is always someone better than you and we can always learn from their work.
3. Edge cases are important.
4. Hard work beats talent.
5. Planning and the ability to communicate ideas is essential to software development

## How to Build
### C++ Code with CMake
[CMake](https://cmake.org/) (version >= 3.19.7) is the build tool that manages 
all of the C++ code in this project. Code is compiled with a C++14 compiler.

#### Normal Usage
Do the "cmake dance". \
`mkdir build` to create a separate build folder to isolate generated cmake build
files. \
`cd build` to enter build folder. \
`cmake ..` to tell cmake to look at the CMakeLists.txt at project root. \
`make && make test` to compile source and run tests.

## Table of Contents
| Question    | Difficulty |   Topic    | Solved | Unit Tests | Time | Space |
|-------------|------------|------------|--------|------------|------|-------|
| 1 - Two Sum | Easy       | HashTables | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/1-two-sum.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/1-two-sum-test.cpp) | O(n) | O(n) |
| 2 - Add Two Numbers| Medium     | LinkedLists | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/2-add-two-numbers.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/2-add-two-numbers-test.cpp) | O(n+m) | O(max(n+1,m+1)) |
| 3 - Longest Substring Without Repeating Characters | Medium     | Sliding Window | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/3-longest-substring-without-repeating-characters.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/3-longest-substring-without-repeating-characters-test.cpp) | O(n) | O(n) |
| 4 - Median of Two Sorted Arrays | Hard     | Divide and Conquer | [x](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/hard/4-median-of-two-sorted-arrays.h) | [x](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/hard/4-median-of-two-sorted-arrays-test.cpp) |
| 121 - Best Time to Buy and Sell Stock | Easy     | Arrays | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/121-best-time-to-buy-and-sell-stock.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/121-best-time-to-buy-and-sell-stock-test.cpp) | O(n) | O(1) |
| 217 - Contains Duplicate | Easy     | Arrays & HashSets | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/217-contains-duplicate.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/217-contains-duplicate-test.cpp) | O(n) | O(n) |
