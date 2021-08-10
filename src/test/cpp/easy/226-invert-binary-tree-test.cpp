#include "easy/226-invert-binary-tree.h"

#include "gtest/gtest.h"

TEST(InvertBinaryTree, FirstExample) {
  TreeNode left_left_leaf(1);
  TreeNode left_right_leaf(3);
  TreeNode right_left_leaf(6);
  TreeNode right_right_leaf(9);
  TreeNode left_parent(2, &left_left_leaf, &left_right_leaf);
  TreeNode right_parent(7, &right_left_leaf, &right_right_leaf);
  TreeNode root(4, &left_parent, &right_parent);
}

