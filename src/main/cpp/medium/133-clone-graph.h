#ifndef LEETCODE_MEDIUM_133_CLONE_GRAPH_H_
#define LEETCODE_MEDIUM_133_CLONE_GRAPH_H_

#include <vector>
#include <unordered_map>

namespace leetcode {
class Node {
public:
  int val;
  std::vector<Node*> neighbors;
  Node() {
    val = 0;
    neighbors = std::vector<Node*>();
  }
  Node(int val) {
    this->val = val;
    neighbors = std::vector<Node*>();
  }
  Node(int val, std::vector<Node*> neighbors) {
    this->val = val;
    this->neighbors = neighbors;
  }
};

class CloneGraph {
public:
  Node* cloneGraph(Node* node) {
    if (node == nullptr) return nullptr;
    if (m_marked.find(node) == m_marked.end()) {
      m_marked[node] = new Node(node->val);
    }
    for (Node* neighbor : node->neighbors) {
      if (m_marked.find(neighbor) == m_marked.end()) {
        m_marked[node]->neighbors.push_back(cloneGraph(neighbor));
      }
      else {
        m_marked[node]->neighbors.push_back(m_marked[neighbor]);
      }
    }
    return m_marked[node];
  }
private:
  std::unordered_map<Node*,Node*> m_marked;
};
} // namespace leetcode
#endif
