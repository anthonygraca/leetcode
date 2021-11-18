#ifndef LEETCODE_EASY_112_PATH_SUM_H_
#define LEETCODE_EASY_112_PATH_SUM_H_

/*
  Given the root of a binary tree and an integer targetSum, return true if the 
  tree has a root-to-leaf path such that adding up all the values along the 
  path equals targetSum.

  A leaf is a node with no children.


  Constraints:
  * The number of nodes in the tree is in the range [0, 5000].
  * -1000 <= Node.val <= 1000
  * -1000 <= targetSum <= 1000
 */

#include "util/tree-node.h"

namespace leetcode {
class PathSum {
public:
  bool hasPathSum(TreeNode* node, int target_sum) {
    postorder(node);
    return true;
  }
  void postorder(TreeNode* node) {
    if (node == nullptr) return;
    postorder(node->left);
    postorder(node->right);
    //sum
  }
//private:
};
} // namespace leetcode

#endif
