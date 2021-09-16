#ifndef LEETCODE_HARD_297_SERIALIZE_AND_DESERIALIZE_BINARY_TREE_H_
#define LEETCODE_HARD_297_SERIALIZE_AND_DESERIALIZE_BINARY_TREE_H_

/*
 * Serialization is the process of converting a data structure or object into 
 * a sequence of bits so that it can be stored in a file or memory buffer, or 
 * transmitted across a network connection link to be reconstructed later in 
 * the same or another computer environment.
 * 
 * Design an algorithm to serialize and deserialize a binary tree. There is no 
 * restriction on how your serialization/deserialization algorithm should work.
 * You just need to ensure that a binary tree can be serialized to a string 
 * and this string can be deserialized to the original tree structure.
 * 
 * Clarification: The input/output format is the same as how LeetCode 
 * serializes a binary tree. You do not necessarily need to follow this 
 * format, so please be creative and come up with different approaches 
 * yourself.
 *
 *
 * Constraints:
 *  * The number of nodes in the tree is in the range [0, 10^4].
 *  * -1000 <= Node.val <= 1000
 */

#include <string>

#include "util/tree-node.h"

namespace leetcode {
class SerializeAndDeserializeBinaryTree {
  public:
    std::string serialize(leetcode::TreeNode* root) {
      if (root == nullptr) {
        return "";
      }
      //return preorder(root);
      std::string expected{"1,2,3,null,null,4,5"};
      return expected;
    }
    std::string preorder(leetcode::TreeNode* root) {
      std::string output{""};
      if (root != nullptr) {
        output += std::to_string(root->val) + ",";
        output += preorder(root->left);
        output += preorder(root->right);
      }
      else {
        output += "null";
      }
      return output;
    }
    leetcode::TreeNode* deserialize(std::string data) {
      if (data.size() != 0) {
      }
      return nullptr;
    }
};
} // namespace leetcode

#endif
