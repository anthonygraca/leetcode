#ifndef LEETCODE_HARD_124_BINARY_TREE_MAXIMUM_PATH_SUM_H_
#define LEETCODE_HARD_124_BINARY_TREE_MAXIMUM_PATH_SUM_H_

/*
 *
  A path in a binary tree is a sequence of nodes where each pair of adjacent 
  nodes in the sequence has an edge connecting them. A node can only appear in 
  the sequence at most once. Note that the path does not need to pass through 
  the root.

  The path sum of a path is the sum of the node's values in the path.

  Given the root of a binary tree, return the maximum path sum of any path.


  Constraints:
  * The number of nodes in the tree is in the range [1, 3 * 10^4].
  * -1000 <= Node.val <= 1000
 */

#include "util/tree-node.h"

#include <algorithm>
#include <limits>

namespace leetcode {
class BinaryTreeMaximumPathSum {
  public:
    int maxPathSum(const leetcode::TreeNode* root) {
      if (root == nullptr) {
        return 0;
      }
      postorder(root);
      return max_sum;
    }
  private:
    int max_sum = std::numeric_limits<int>::min();
    int postorder(const leetcode::TreeNode* root) {
      if (root == nullptr) return 0;
      int left = std::max(postorder(root->left), 0);
      int right = std::max(postorder(root->right), 0);
      max_sum = std::max(root->val + left + right, max_sum);
      return root->val + std::max(left,right);
    }
};
} // namespace leetcode

#endif
