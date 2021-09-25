#ifndef LEETCODE_EASY_104_MAXIMUM_DEPTH_OF_BINARY_TREE_H_
#define LEETCODE_EASY_104_MAXIMUM_DEPTH_OF_BINARY_TREE_H_

#include <algorithm>

#include "util/tree-node.h"

namespace leetcode {
class MaximumDepthOfBinaryTree {
  public:
    int maxDepth(TreeNode* node) {
      if (node == nullptr) {
        return m_max_depth;
      }
      inorder(node, m_max_depth+1);
      return m_max_depth;
    }
  private:
    int m_max_depth = 0;
    void inorder(TreeNode* node, int current_depth) {
      if (node->left != nullptr) inorder(node->left, current_depth+1);
      m_max_depth = std::max(m_max_depth, current_depth);
      if (node->right != nullptr) inorder(node->right, current_depth+1);
    }
};
} // namespace leetcode

#endif
