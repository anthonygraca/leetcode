#include "easy/226-invert-binary-tree.h"

#include "gtest/gtest.h"

TEST(InvertBinaryTree, FirstExample) {
  leetcode::TreeNode left_left_leaf(1);
  leetcode::TreeNode left_right_leaf(3);
  leetcode::TreeNode right_left_leaf(6);
  leetcode::TreeNode right_right_leaf(9);
  leetcode::TreeNode left_parent(2, &left_left_leaf, &left_right_leaf);
  leetcode::TreeNode right_parent(7, &right_left_leaf, &right_right_leaf);
  leetcode::TreeNode root(4, &left_parent, &right_parent);
  leetcode::InvertBinaryTree solution;

}

