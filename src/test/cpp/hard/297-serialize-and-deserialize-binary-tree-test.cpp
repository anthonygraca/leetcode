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
TEST(SerializeAndDeserializeBinaryTree, FirstExampleSerialize) {
  leetcode::TreeNode deepest_left_child(4);
  leetcode::TreeNode deepest_right_child(5);
  leetcode::TreeNode right_child(3, &deepest_left_child, &deepest_right_child);
  leetcode::TreeNode left_child(2);
  leetcode::TreeNode root(1, &left_child, &right_child);
  leetcode::SerializeAndDeserializeBinaryTree solution;
  std::string expected{"1,2,3,null,null,4,5"};
  ASSERT_EQ(expected, solution.serialize(&root));
}

TEST(SerializeAndDeserializeBinaryTree, SecondExampleSerialize) {
  leetcode::SerializeAndDeserializeBinaryTree solution;
  std::string expected{""};
  ASSERT_EQ(expected, solution.serialize(nullptr));
}

TEST(SerializeAndDeserializeBinaryTree, SecondExampleDeserialize) {
  leetcode::SerializeAndDeserializeBinaryTree solution;
  std::string expected{""};
  ASSERT_EQ(expected, solution.serialize(nullptr));
}

/*
TEST(SerializeAndDeserializeBinaryTree, ThirdExampleSerialize) {
  leetcode::TreeNode root(1);
  leetcode::SerializeAndDeserializeBinaryTree solution;
  std::string expected{"1"};
  ASSERT_EQ(expected, solution.serialize(&root));
}
*/

/*
TEST(SerializeAndDeserializeBinaryTree, FourthExampleSerialize) {
  leetcode::TreeNode left_child(2);
  leetcode::TreeNode root(1, &left_child, nullptr);
  leetcode::SerializeAndDeserializeBinaryTree solution;
  std::string expected{"1,2"};
  ASSERT_EQ(expected, solution.serialize(&root));
}
*/
