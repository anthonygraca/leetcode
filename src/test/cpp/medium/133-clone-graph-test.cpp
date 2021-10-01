#include "medium/133-clone-graph.h"

#include "gtest/gtest.h"

#include <stack>
#include <vector>

class Dfs {
public:
  Dfs(leetcode::Node* n) : m_marked(100, false) {
    dfs(n);
  }
  std::stack<int> getDepthFirstOrder() {
    return postorder;
  }
private:
  std::vector<bool> m_marked;
  std::stack<int> postorder;
  void dfs(leetcode::Node* n) {
    m_marked[n->val] = true;
    for (auto node : n->neighbors) {
      if (!m_marked[node->val]) dfs(node);
    }
    postorder.push(n->val);
  }
};

TEST(CloneGraph, DISABLED_FirstExample) {
  leetcode::Node a(1);
  leetcode::Node b(2);
  leetcode::Node c(3);
  leetcode::Node d(4);
  a.neighbors.push_back(&b); 
  a.neighbors.push_back(&d);
  b.neighbors.push_back(&a);
  b.neighbors.push_back(&c);
  c.neighbors.push_back(&b);
  c.neighbors.push_back(&d);
  d.neighbors.push_back(&a);
  d.neighbors.push_back(&c);
  leetcode::CloneGraph solution;
  Dfs input_graph_dfs{&a};
  auto solution_graph{solution.cloneGraph(&a)};
  Dfs solution_graph_dfs{solution_graph};
  std::stack<int> input_graph_order = input_graph_dfs.getDepthFirstOrder();
  std::stack<int> solution_graph_order = solution_graph_dfs.getDepthFirstOrder();
  ASSERT_EQ(solution_graph_order.top(), input_graph_order.top());
  input_graph_order.pop();
  solution_graph_order.pop();
  ASSERT_EQ(solution_graph_order.top(), input_graph_order.top());
  input_graph_order.pop();
  solution_graph_order.pop();
  ASSERT_EQ(solution_graph_order.top(), input_graph_order.top());
  input_graph_order.pop();
  solution_graph_order.pop();
  ASSERT_EQ(solution_graph_order.top(), input_graph_order.top());
  input_graph_order.pop();
  solution_graph_order.pop();
}

TEST(CloneGraph, DISABLED_SecondExampleSingleNode) {
  leetcode::Node a(1);
  leetcode::CloneGraph solution;
  Dfs input_graph_dfs{&a};
  auto solution_graph{solution.cloneGraph(&a)};
  Dfs solution_graph_dfs{solution_graph};
  std::stack<int> input_graph_order = input_graph_dfs.getDepthFirstOrder();
  std::stack<int> solution_graph_order = solution_graph_dfs.getDepthFirstOrder();
  ASSERT_EQ(solution_graph_order.top(), input_graph_order.top());
  input_graph_order.pop();
  solution_graph_order.pop();
}

TEST(CloneGraph, ThirdExampleNoNodes) {
  leetcode::CloneGraph solution;
  ASSERT_TRUE(solution.cloneGraph(nullptr) == nullptr);
}

TEST(CloneGraph, DISABLED_FourthExampleTwoNodes) {
  leetcode::Node a(1);
  leetcode::Node b(2);
  a.neighbors.push_back(&b);
  b.neighbors.push_back(&a);
  leetcode::CloneGraph solution;
  Dfs input_graph_dfs{&a};
  auto solution_graph{solution.cloneGraph(&a)};
  Dfs solution_graph_dfs{solution_graph};
  std::stack<int> input_graph_order = input_graph_dfs.getDepthFirstOrder();
  std::stack<int> solution_graph_order = solution_graph_dfs.getDepthFirstOrder();
  ASSERT_EQ(solution_graph_order.top(), input_graph_order.top());
  input_graph_order.pop();
  solution_graph_order.pop();
  ASSERT_EQ(solution_graph_order.top(), input_graph_order.top());
  input_graph_order.pop();
  solution_graph_order.pop();
}
