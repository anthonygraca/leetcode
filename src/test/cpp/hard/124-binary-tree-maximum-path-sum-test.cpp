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
/*
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
*/
