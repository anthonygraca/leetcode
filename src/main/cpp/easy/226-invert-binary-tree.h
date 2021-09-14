#ifndef LEETCODE_EASY_226_INVERT_BINARY_TREE_H_
#define LEETCODE_EASY_226_INVERT_BINARY_TREE_H_

#include <stack>

#include "util/tree-node.h"

namespace leetcode {
class InvertBinaryTree {
  public:
    TreeNode* invertTree(TreeNode* root) {
      if (root == nullptr) return root;
      TreeNode* left = invertTree(root->left);
      TreeNode* right = invertTree(root->right);
      root->left = right;
      root->right = left;
      return root;
    }
};
} // namespace leetcode

#endif
