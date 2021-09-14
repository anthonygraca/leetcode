#include "hard/297-serialize-and-deserialize-binary-tree.h"

#include "gtest/gtest.h"

#include "util/tree-node.h"

/*
 * Input Tree:
 *            1
 *          /    \
 *        2       3
 *             /     \
 *            4       5
 */
TEST(SerializeAndDeserializeBinaryTree, FirstExample) {
  leetcode::TreeNode deepest_left_child(4);
  leetcode::TreeNode deepest_right_child(5);
  leetcode::TreeNode right_child(3, &deepest_left_child, &deepest_right_child);
  leetcode::TreeNode left_child(2);
  leetcode::TreeNode root(1, &left_child, &right_child);
  leetcode::SerializeAndDeserializeBinaryTree solution;
  std::string expected{"1,2,3,4,null,null,4,5"};
  ASSERT_EQ(expected, solution.serialize(&root));
}
