#include "hard/124-binary-tree-maximum-path-sum.h"

#include "gtest/gtest.h"  

#include "util/tree-node.h"

TEST(BinaryTreeMaximumPathSum, FirstExample) {
  leetcode::TreeNode left_child(2);
  leetcode::TreeNode right_child(3);
  leetcode::TreeNode root(1, &left_child, &right_child);
  leetcode::BinaryTreeMaximumPathSum solution;
  const int expected{6};
  ASSERT_EQ(expected, solution.maxPathSum(&root));
}
