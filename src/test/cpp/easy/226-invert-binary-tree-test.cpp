#include "easy/226-invert-binary-tree.h"

#include "gtest/gtest.h"

std::string inorder(leetcode::TreeNode* root) {
  std::string result{""};
  if (root->left != nullptr) result += inorder(root->left);
  result += std::to_string(root->val) + " ";
  if (root->right != nullptr) result += inorder(root->right);
  return result;
}

TEST(InvertBinaryTree, FirstExample) {
  leetcode::TreeNode left_left_leaf(1);
  leetcode::TreeNode left_right_leaf(3);
  leetcode::TreeNode right_left_leaf(6);
  leetcode::TreeNode right_right_leaf(9);
  leetcode::TreeNode left_parent(2, &left_left_leaf, &left_right_leaf);
  leetcode::TreeNode right_parent(7, &right_left_leaf, &right_right_leaf);
  leetcode::TreeNode root(4, &left_parent, &right_parent);
  leetcode::InvertBinaryTree solution;
  std::string expected_inorder{"9 7 6 4 3 2 1 "};
  ASSERT_EQ(expected_inorder, inorder(solution.invertTree(&root)));


}

