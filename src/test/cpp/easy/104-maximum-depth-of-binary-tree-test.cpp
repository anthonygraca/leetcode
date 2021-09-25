#include "easy/104-maximum-depth-of-binary-tree.h"

#include "gtest/gtest.h"

#include "util/tree-node.h"

const int SOME_NUMBER{8};

TEST(MaximumDepthOfBinaryTree, NullExample) {
  leetcode::MaximumDepthOfBinaryTree solution;
  ASSERT_EQ(0, solution.maxDepth(nullptr));
}

TEST(MaximumDepthOfBinaryTree, FirstLevelExample) {
  leetcode::TreeNode node{SOME_NUMBER};
  leetcode::MaximumDepthOfBinaryTree solution;
  ASSERT_EQ(1, solution.maxDepth(&node));
}

TEST(MaximumDepthOfBinaryTree, SecondLevelExampleLeftLeaning) {
  leetcode::TreeNode left_node{SOME_NUMBER};
  leetcode::TreeNode node{SOME_NUMBER, &left_node, nullptr};
  leetcode::MaximumDepthOfBinaryTree solution;
  ASSERT_EQ(2, solution.maxDepth(&node));
}

TEST(MaximumDepthOfBinaryTree, SecondLevelExampleRightLeaning) {
  leetcode::TreeNode right_node{SOME_NUMBER};
  leetcode::TreeNode node{SOME_NUMBER, nullptr, &right_node};
  leetcode::MaximumDepthOfBinaryTree solution;
  ASSERT_EQ(2, solution.maxDepth(&node));
}

TEST(MaximumDepthOfBinaryTree, SecondLevelExampleBalanced) {
  leetcode::TreeNode left_node{SOME_NUMBER};
  leetcode::TreeNode right_node{SOME_NUMBER};
  leetcode::TreeNode node{SOME_NUMBER, &left_node, &right_node};
  leetcode::MaximumDepthOfBinaryTree solution;
  ASSERT_EQ(2, solution.maxDepth(&node));
}
