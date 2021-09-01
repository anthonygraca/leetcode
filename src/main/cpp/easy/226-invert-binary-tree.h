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
      return postorder(root);
    }
  TreeNode* postorder(TreeNode* root) {
    if (root->left != nullptr) postorder(root->left);
    if (root->right != nullptr) postorder(root->right);
    root = swapChildren(root);
    return root;
  }
  TreeNode* swapChildren(TreeNode* root) {
    if (root->left == nullptr && root->right == nullptr) return root;
    else if (root->right == nullptr) {
      root->right = root->left;
      root->left = nullptr;
    }
    else if (root->left == nullptr) {
      root->left = root->right;
      root->right = nullptr;
    }
    else {  //if (root->left != nullptr && root->right != nullptr) 
      auto temp = root->left;
      root->left = root->right;
      root->right = temp;
    }
    return root;
  }
};
} // namespace leetcode

#endif
