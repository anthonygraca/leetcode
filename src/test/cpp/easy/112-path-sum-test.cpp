#include "easy/112-path-sum.h"

#include "gtest/gtest.h"

#include "util/tree-node.h"

TEST(PathSum, FirstExample) {
  leetcode::TreeNode left_right_child(2, nullptr, nullptr);
  leetcode::TreeNode left_left_child(7, nullptr, nullptr);
  leetcode::TreeNode left_left_parent(11, &left_left_child, &left_right_child);
  leetcode::TreeNode left_subtree(4, &left_left_parent, nullptr);
  leetcode::TreeNode right_right_child(1, nullptr, nullptr);
  leetcode::TreeNode right_right_parent(4, nullptr, &right_right_child);
  leetcode::TreeNode right_left_parent(13, nullptr, nullptr);
  leetcode::TreeNode right_subtree(8, &right_left_parent, &right_right_parent);
  leetcode::TreeNode root(5, &left_subtree, &right_subtree);
  leetcode::PathSum algo;
  ASSERT_TRUE(algo.hasPathSum(&root, 22));
}

/*
TEST(PathSum, SecondExample) {
  leetcode::TreeNode left_subtree(2, nullptr, nullptr);
  leetcode::TreeNode right_subtree(3, nullptr, nullptr);
  leetcode::TreeNode root(1, &left_subtree, &right_subtree);
  leetcode::PathSum algo;
  ASSERT_FALSE(algo.hasPathSum(&root, 5));
}

TEST(PathSum, ThirdExample) {
  leetcode::TreeNode left_subtree(2, nullptr, nullptr);
  leetcode::TreeNode root(1, &left_subtree, nullptr);
  leetcode::PathSum algo;
  ASSERT_FALSE(algo.hasPathSum(&root, 0));
}
*/
