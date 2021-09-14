#include "hard/124-binary-tree-maximum-path-sum.h"

#include "gtest/gtest.h"  

#include "util/tree-node.h"

/*
 * Input Tree:
 *      1
 *   /     \
 * 2         3
 */
TEST(BinaryTreeMaximumPathSum, FirstExample) {
  leetcode::TreeNode left_child(2);
  leetcode::TreeNode right_child(3);
  leetcode::TreeNode root(1, &left_child, &right_child);
  leetcode::BinaryTreeMaximumPathSum solution;
  const int expected{6};
  ASSERT_EQ(expected, solution.maxPathSum(&root));
}

/*
 * Input Tree:
 *            -10
 *          /      \
 *        9         20
 *               /      \
 *             15        7
 */
TEST(BinaryTreeMaximumPathSum, SecondExample) {
  leetcode::TreeNode deepest_left_child(15);
  leetcode::TreeNode deepest_right_child(7);
  leetcode::TreeNode right_child(20, &deepest_left_child, &deepest_right_child);
  leetcode::TreeNode left_child(9);
  leetcode::TreeNode root(-10, &left_child, &right_child);
  leetcode::BinaryTreeMaximumPathSum solution;
  const int expected{42};
  ASSERT_EQ(expected, solution.maxPathSum(&root));
}

/*
 * Input Tree:
 *      2 
 *         \
 *          -1
 */
TEST(BinaryTreeMaximumPathSum, ThirdExample) {
  leetcode::TreeNode right_child(-1);
  leetcode::TreeNode root(2, nullptr, &right_child);
  leetcode::BinaryTreeMaximumPathSum solution;
  const int expected{2};
  ASSERT_EQ(expected, solution.maxPathSum(&root));
}

/*
 * Input Tree:
 *     -3
 */
TEST(BinaryTreeMaximumPathSum, FourthExample) {
  leetcode::TreeNode root(-3);
  leetcode::BinaryTreeMaximumPathSum solution;
  const int expected{-3};
  ASSERT_EQ(expected, solution.maxPathSum(&root));
}

/*
 * Input Tree:
 *      -2 
 *         \
 *          -1
 */
TEST(BinaryTreeMaximumPathSum, FifthExample) {
  leetcode::TreeNode right_child(-1);
  leetcode::TreeNode root(-2, nullptr, &right_child);
  leetcode::BinaryTreeMaximumPathSum solution;
  const int expected{-1};
  ASSERT_EQ(expected, solution.maxPathSum(&root));
}

TEST(BinaryTreeMaximumPathSum, SixthExample) {
  leetcode::TreeNode deepest_left_child(7);
  leetcode::TreeNode deepest_middle_child(2);
  leetcode::TreeNode deepest_right_child(1);
  leetcode::TreeNode middle_left_child(11, &deepest_left_child, 
      &deepest_right_child);
  leetcode::TreeNode middle_middle_child(13);
  leetcode::TreeNode middle_right_child(4, nullptr, &deepest_right_child);
  leetcode::TreeNode left_child(4, &middle_left_child, nullptr);
  leetcode::TreeNode right_child(8, &middle_middle_child, &middle_right_child);
  leetcode::TreeNode root(5, &left_child, &right_child);
  leetcode::BinaryTreeMaximumPathSum solution;
  const int expected{48};
  ASSERT_EQ(expected, solution.maxPathSum(&root));
}
