#include "easy/270-closest-binary-tree-value.h"

#include "gtest/gtest.h"

#include "util/tree-node.h"

/*
 *      4
 *    /   \
 *   2     5
 *  / \
 * 1   3
 */
TEST(ClosestBinaryTreeValue, FirstExample) {
  leetcode::TreeNode left_right_leaf{3};
  leetcode::TreeNode far_left_leaf{1};
  leetcode::TreeNode right_node{5};
  leetcode::TreeNode left_node{2, &far_left_leaf, &left_right_leaf};
  leetcode::TreeNode root{4, &left_node, &right_node};
  float target = 3.14159;
  leetcode::ClosestBinaryTreeValue algo;
  ASSERT_EQ(3, algo.closestValue(&root, target));
}
