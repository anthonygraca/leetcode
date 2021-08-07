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
all of the C++ code in this project. Code is compiled with a C++20 compiler.

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
| [1](https://leetcode.com/problems/two-sum/) - Two Sum | Easy       | HashTables | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/1-two-sum.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/1-two-sum-test.cpp) | O(n) | O(n) |
| [2](https://leetcode.com/problems/add-two-numbers/) - Add Two Numbers| Medium     | Linked Lists | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/2-add-two-numbers.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/2-add-two-numbers-test.cpp) | O(n+m) | O(max(n,m)) |
| [3](https://leetcode.com/problems/longest-substring-without-repeating-characters/) - Longest Substring Without Repeating Characters | Medium | Sliding Window | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/3-longest-substring-without-repeating-characters.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/3-longest-substring-without-repeating-characters-test.cpp) | O(n) | O(n) |
| [4](https://leetcode.com/problems/median-of-two-sorted-arrays/) - Median of Two Sorted Arrays | Hard | Divide and Conquer | [x](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/hard/4-median-of-two-sorted-arrays.h) | [x](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/hard/4-median-of-two-sorted-arrays-test.cpp) |
| [11](https://leetcode.com/problems/container-with-most-water/) - Container With Most Water | Medium | Arrays | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/11-container-with-most-water.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/11-container-with-most-water-test.cpp) | O(n) | O(1) |
| [15](https://leetcode.com/problems/3sum/) - 3Sum | Medium | Arrays | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/15-3sum.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/15-3sum-test.cpp) | O(n^2) | O(n) |
| [21](https://leetcode.com/problems/merge-two-sorted-lists/) - Merge Two Sorted Lists | Easy | Linked Lists | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/21-merge-two-sorted-lists.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/21-merge-two-sorted-lists-test.cpp) | O(n+m) | O(n+m) |
| [23](https://leetcode.com/problems/merge-k-sorted-lists/) - Merge k Sorted Lists | Hard     | Linked Lists & Heaps | [x](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/hard/23-merge-k-sorted-lists.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/hard/23-merge-k-sorted-lists-test.cpp) | O(list[i].length * k) | O(n+m) | 
| [33](https://leetcode.com/problems/search-in-rotated-sorted-array/) - Search in Rotated Sorted Array | Medium | Arrays | [x](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/33-search-in-rotated-sorted-array.h) | [x](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/33-search-in-rotated-sorted-array-test.cpp) |  |  |
| 53 - Maximum Subarray | Easy | Divide And Conquer | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/53-maximum-subarray.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/53-maximum-subarray-test.cpp) | O(n) | O(1) |
| 70 - Climbing Stairs | Easy | Dynamic Programming | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/70-climbing-stairs.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/70-climbing-stairs-test.cpp) | O(n) | O(1) |
| 121 - Best Time to Buy and Sell Stock | Easy | Arrays | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/121-best-time-to-buy-and-sell-stock.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/121-best-time-to-buy-and-sell-stock-test.cpp) | O(n) | O(1) |
| 152 - Maximum Product Subarray | Medium | Arrays | [x](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/152-maximum-product-subarray.h) | [x](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/152-maximum-product-subarray-test.cpp) |  |  |
| 153 - Find Minimum in Rotated Sorted Array | Medium | Binary Search | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/153-find-minimum-in-rotated-sorted-array.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/153-find-minimum-in-rotated-sorted-array-test.cpp) | O(logn) | O(1) |
| 153\* - **Recursive** Find Minimum in Rotated Sorted Array | Medium | Binary Search | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/153-recursive-find-minimum-in-rotated-sorted-array.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/153-recursive-find-minimum-in-rotated-sorted-array-test.cpp) | O(logn) | O(1) |
| 217 - Contains Duplicate | Easy     | Arrays & HashSets | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/217-contains-duplicate.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/217-contains-duplicate-test.cpp) | O(n) | O(n) |
| 238 - Product of Array Except Self | Medium | Arrays | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/238-product-of-array-except-self.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/238-product-of-array-except-self-test.cpp) | O(n) | O(1) |
| 322 - Coin Change | Medium | Dynamic Programming | [x](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/322-coin-change.h) | [x](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/322-coin-change-test.cpp) | |  |
| 1155 - Number of Dice Rolls With Target Sum | Medium | ? | [x](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/1155-number-of-dice-rolls-with-target-sum.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/1155-number-of-dice-rolls-with-target-sum-test.cpp) | | | -->
