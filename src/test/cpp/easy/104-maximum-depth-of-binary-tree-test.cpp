#include "easy/104-maximum-depth-of-binary-tree.h"

#include "gtest/gtest.h"

#include "util/tree-node.h"

TEST(MaximumDepthOfBinaryTree, NullExample) {
  leetcode::MaximumDepthOfBinaryTree solution;
  ASSERT_EQ(0, solution.maxDepth(nullptr));
}
