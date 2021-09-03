#ifndef LEETCODE_EASY_226_INVERT_BINARY_TREE_H_
#define LEETCODE_EASY_226_INVERT_BINARY_TREE_H_

#include <stack>

namespace leetcode {
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) 
    : val(x), left(left), right(right) {}
};

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
