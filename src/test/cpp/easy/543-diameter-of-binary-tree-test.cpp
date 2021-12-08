#include "easy/543-diameter-of-binary-tree.h"

#include "gtest/gtest.h"

#include "util/tree-node.h"

TEST(DiameterOfBinaryTree, FirstExample) {
  leetcode::TreeNode right_child(5, nullptr, nullptr);
  leetcode::TreeNode left_child(4, nullptr, nullptr);
  leetcode::TreeNode left_parent(2, &left_child, &right_child);
  leetcode::TreeNode right_parent(3, nullptr, nullptr);
  leetcode::TreeNode root(1, &left_parent, &right_parent);
  leetcode::DiameterOfBinaryTree algo;
  ASSERT_EQ(3, algo.diameterOfBinaryTree(&root));
}
