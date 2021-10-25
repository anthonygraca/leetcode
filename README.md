# LeetCode Practice

## Why Practice?
1. Data Stuctures and Algorithms are important. [Old codebases can still gain huge speedups](https://nee.lv/2021/02/28/How-I-cut-GTA-Online-loading-times-by-70/)
2. There is always someone better than you and we can always learn from their work.
3. Considering edge cases is important.
4. Hard work beats talent.
5. Planning and the ability to communicate ideas are both essential to software development.

## How to Build
### C++ Code with CMake
[CMake](https://cmake.org/) (version >= 3.19.7) is the build tool that manages 
all of the C++ code in this project. Code is compiled with a C++20 compiler.

Exercise for the reader to investigate how to install CMake and a C++ Compiler 
on your system.

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
| [1](https://leetcode.com/problems/two-sum/) - Two Sum | Easy | Hash Tables | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/1-two-sum.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/1-two-sum-test.cpp) | O(n) | O(n) |
| [2](https://leetcode.com/problems/add-two-numbers/) - Add Two Numbers| Medium | Linked Lists | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/2-add-two-numbers.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/2-add-two-numbers-test.cpp) | O(n+m) | O(max(n,m)) |
| [3](https://leetcode.com/problems/longest-substring-without-repeating-characters/) - Longest Substring Without Repeating Characters | Medium | Sliding Window | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/3-longest-substring-without-repeating-characters.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/3-longest-substring-without-repeating-characters-test.cpp) | O(n) | O(n) |
| [4](https://leetcode.com/problems/median-of-two-sorted-arrays/) - Median of Two Sorted Arrays | Hard | Divide and Conquer | [x](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/hard/4-median-of-two-sorted-arrays.h) | [x](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/hard/4-median-of-two-sorted-arrays-test.cpp) |
| [11](https://leetcode.com/problems/container-with-most-water/) - Container With Most Water | Medium | Arrays | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/11-container-with-most-water.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/11-container-with-most-water-test.cpp) | O(n) | O(1) |
| [15](https://leetcode.com/problems/3sum/) - 3Sum | Medium | Arrays | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/15-3sum.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/15-3sum-test.cpp) | O(n^2) | O(n) |
| [17](https://leetcode.com/problems/letter-combinations-of-a-phone-number/) - Letter Combinations of a Phone Number| Medium | Backtracking & 8 Queens | [x](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/17-letter-combinations-of-a-phone-number.h) | [x](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/17-letter-combinations-of-a-phone-number-test.cpp) |  |  |
| [21](https://leetcode.com/problems/merge-two-sorted-lists/) - Merge Two Sorted Lists | Easy | Linked Lists | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/21-merge-two-sorted-lists.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/21-merge-two-sorted-lists-test.cpp) | O(n+m) | O(n+m) |
| [23](https://leetcode.com/problems/merge-k-sorted-lists/) - Merge k Sorted Lists | Hard | Linked Lists & Heaps | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/hard/23-merge-k-sorted-lists.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/hard/23-merge-k-sorted-lists-test.cpp) | O(mlogk) | O(k) | 
| [33](https://leetcode.com/problems/search-in-rotated-sorted-array/) - Search in Rotated Sorted Array | Medium | Arrays | [x](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/33-search-in-rotated-sorted-array.h) | [x](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/33-search-in-rotated-sorted-array-test.cpp) |  |  |
| [46](https://leetcode.com/problems/permutations/) - Permutations | Medium | Dynamic Programming (Top Down) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/46-permutations.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/46-permutations-test.cpp) | O(n) | O(n!) | 
| [48](https://leetcode.com/problems/rotate-image/) - Rotate Image | Medium | Array, Matrix, Meme | [x](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/48-rotate-image.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/48-rotate-image-test.cpp) | | | 
| [53](https://leetcode.com/problems/maximum-subarray/) - Maximum Subarray | Easy | Divide And Conquer | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/53-maximum-subarray.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/53-maximum-subarray-test.cpp) | O(n) | O(1) |
| [62](https://leetcode.com/problems/unique-paths/) - Unique Paths | Medium | Dynamic Programming, Top Down / Memoization | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/62-unique-paths.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/62-unique-paths-test.cpp) | O(n\*m) | O(n\*m) |
| [62](https://leetcode.com/problems/unique-paths/) - **Iterative** Unique Paths | Medium | Dynamic Programming, Bottom Up / Tabulation | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/62-iterative-unique-paths.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/62-iterative-unique-paths-test.cpp) | O(n\*m) | O(n\*m) |
| [70](https://leetcode.com/problems/climbing-stairs/) - Climbing Stairs | Easy | Dynamic Programming, Bottom Up / Tabulation, Fibonacci | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/70-climbing-stairs.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/70-climbing-stairs-test.cpp) | O(n) | O(1) |
| [70](https://leetcode.com/problems/climbing-stairs/)\* - **Recursive** Climbing Stairs | Easy | Dynamic Programming, Top Down / Memoization, Fibonacci| [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/70-recursive-climbing-stairs.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/70-recursive-climbing-stairs-test.cpp) | O(n) | O(1) |
| [104](https://leetcode.com/problems/maximum-depth-of-binary-tree/) - Maximum Depth of Binary Tree | Easy | Tree | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/104-maximum-depth-of-binary-tree.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/104-maximum-depth-of-binary-tree-test.cpp) | O(n) | O(1) |
| [121](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) - Best Time to Buy and Sell Stock | Easy | Arrays | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/121-best-time-to-buy-and-sell-stock.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/121-best-time-to-buy-and-sell-stock-test.cpp) | O(n) | O(1) |
| [124](https://leetcode.com/problems/binary-tree-maximum-path-sum/) - Binary Tree Maximum Path Sum | Hard | Dynamic Programming, Tree Traversal | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/hard/124-binary-tree-maximum-path-sum.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/hard/124-binary-tree-maximum-path-sum-test.cpp) | O(n) | O(1) |
| [133](https://leetcode.com/problems/clone-graph/) - Clone Graph | Medium | Graph, Depth First Search | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/133-clone-graph.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/133-clone-graph-test.cpp) | O(n+m) | O(n) |
| [141](https://leetcode.com/problems/linked-list-cycle/) - Linked List Cycle | Easy | Linked List | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/141-linked-list-cycle.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/141-linked-list-cycle-test.cpp) | O(n) | O(1) |
| [152](https://leetcode.com/problems/maximum-product-subarray/) - Maximum Product Subarray | Medium | Arrays | [x](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/152-maximum-product-subarray.h) | [x](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/152-maximum-product-subarray-test.cpp) |  |  |
| [153](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) - Find Minimum in Rotated Sorted Array | Medium | Binary Search | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/153-find-minimum-in-rotated-sorted-array.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/153-find-minimum-in-rotated-sorted-array-test.cpp) | O(logn) | O(1) |
| [153](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)\* - **Recursive** Find Minimum in Rotated Sorted Array | Medium | Binary Search | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/153-recursive-find-minimum-in-rotated-sorted-array.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/153-recursive-find-minimum-in-rotated-sorted-array-test.cpp) | O(logn) | O(1) |
| [191](https://leetcode.com/problems/number-of-1-bits/) - Number of 1 Bits | Easy | Binary | [x](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/191-number-of-1-bits.h) | [x](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/191-number-of-1-bits-test.cpp) |  |  |
| [200](https://leetcode.com/problems/number-of-islands/) - Number Of Islands | Medium | Union-Find, Meme | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/200-number-of-islands.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/200-number-of-islands-test.cpp) | O(n\*m) | O(1) |
| [206](https://leetcode.com/problems/reverse-linked-list/) - Reverse Linked List | Easy | Linked Lists, Meme | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/206-reverse-linked-list.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/206-reverse-linked-list-test.cpp) | O(n) | O(1) |
| [207](https://leetcode.com/problems/course-schedule/) - Course Schedule | Medium | Graph, DFS, Topological Sort | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/207-course-schedule.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/207-course-schedule-test.cpp) | O(V+E) | O(V+E) |
| [217](https://leetcode.com/problems/contains-duplicate/) - Contains Duplicate | Easy | Arrays & HashSets | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/217-contains-duplicate.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/217-contains-duplicate-test.cpp) | O(n) | O(n) |
| [226](https://leetcode.com/problems/invert-binary-tree/) - Invert Binary Tree | Easy | Binary Tree, Meme | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/226-invert-binary-tree.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/226-invert-binary-tree-test.cpp) | O(n) | O(1) |
| [238](https://leetcode.com/problems/product-of-array-except-self/) - Product of Array Except Self | Medium | Arrays | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/238-product-of-array-except-self.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/238-product-of-array-except-self-test.cpp) | O(n) | O(1) |
| [270](https://leetcode.com/problems/closest-binary-search-tree-value/) - Closest Binary Search Tree Value | Easy | Trees | [x](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/270-closest-binary-tree-value.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/270-closest-binary-tree-value-test.cpp) | O(logn) | O(1) |
| [297](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/) - Serialize and Deserialize Binary Tree | Hard | Tree Traversal | [x](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/hard/297-serialize-and-deserialize-binary-tree.h) | [x](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/hard/297-serialize-and-deserialize-binary-tree-test.cpp) | O(n) | O(n) |
| [322](https://leetcode.com/problems/coin-change/) - Coin Change | Medium | Dynamic Programming & **Bottom Up/Tabulation** | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/322-coin-change.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/322-coin-change-test.cpp) | O(amount * coins.size()) | O(n) |
| [322](https://leetcode.com/problems/coin-change/)\* - **Recursive** Coin Change | Medium | Dynamic Programming & **Top Down/Memoization** | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/322-recursive-coin-change.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/322-recursive-coin-change-test.cpp) | O(amount * coins.size()) | O(n) |
| [338](https://leetcode.com/problems/counting-bits/) - Counting Bits | Easy | Dynamic Programming, Bit Manipulation | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/easy/338-counting-bits.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/easy/338-counting-bits-test.cpp) | O(n) | O(n) |
| [371](https://leetcode.com/problems/sum-of-two-integers/) - Sum of Two Integers | Medium | Binary | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/371-sum-of-two-integers.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/371-sum-of-two-integers-test.cpp) | O(1) | O(1) |
| [417](https://leetcode.com/problems/pacific-atlantic-water-flow/) - Pacific Atlantic Water Flow | Medium | Graph, DFS | [x](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/417-pacific-atlantic-water-flow.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/417-pacific-atlantic-water-flow-test.cpp) |  |  |
| [934](https://leetcode.com/problems/shortest-bridge/) - Shortest Bridge | Medium | Graph, BFS | [x](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/934-shortest-bridge.h) | [:heavy_check_mark:](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/934-shortest-bridge-test.cpp) |  |  |
| [1155](https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/) - Number of Dice Rolls With Target Sum | Medium | ? | [x](https://github.com/anthonygraca/leetcode/blob/main/src/main/cpp/medium/1155-number-of-dice-rolls-with-target-sum.h) | [x](https://github.com/anthonygraca/leetcode/blob/main/src/test/cpp/medium/1155-number-of-dice-rolls-with-target-sum-test.cpp) | | |
