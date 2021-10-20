#ifndef LEETCODE_MEDIUM_207_COURSE_SCHEDULE_H_
#define LEETCODE_MEDIUM_207_COURSE_SCHEDULE_H_

/*
   There are a total of numCourses courses you have to take, labeled from 0 to 
   numCourses - 1. You are given an array prerequisites where 
   prerequisites[i] = [a_i, b_i] indicates that you must take course b_i first if 
   you want to take course a_i.

   For example, the pair [0, 1], indicates that to take course 0 you have to 
   first take course 1.

   Return true if you can finish all courses. Otherwise, return false.


   Constraints:
    * 1 <= numCourses <= 10^5
    * 0 <= prerequisites.length <= 5000
    * prerequisites[i].length == 2
    * 0 <= a_i, b_i < numCourses
    * All the pairs prerequisites[i] are unique.
 */

#include <vector>
#include <unordered_set>
#include <stack>

namespace leetcode {
class Graph {
public:
  Graph(int v) : m_vertices(v) {
    for (int i = 0; i < v; i++) {
      m_adjacency_list.push_back(std::unordered_set<int>());
    }
  }
  int vertices() const { return m_vertices; };
  int edges() const { return m_edges; };
  void addEdge(int v, int w) {
    m_adjacency_list[v].insert(w);
    m_edges++;
  }
  std::unordered_set<int> adj(int v) const {
    return m_adjacency_list[v];
  }
private:
  int m_vertices=0;
  int m_edges=0;
  std::vector<std::unordered_set<int>> m_adjacency_list;
};

class CourseSchedule {
public:
  bool canFinish(int num_courses, std::vector<std::vector<int>>& prerequisites) {
    m_marked = std::vector<bool>(num_courses, false);
    m_on_stack = std::vector<bool>(num_courses, false);
    m_edge_to = std::vector<int>(num_courses, -1);
    Graph g = generateGraphRepresentation(num_courses, prerequisites);
    return !hasCycle(g);
  }
  Graph generateGraphRepresentation(int num_courses, std::vector<std::vector<int>>& prerequisites) {
    Graph g{num_courses};
    for (auto pair : prerequisites) {
      g.addEdge(pair[0], pair[1]);
    }
    return g;
  }
private:
  std::vector<bool> m_marked;   // keeps track if we visited a node already 
  std::vector<bool> m_on_stack; // keeps track if node exists in our cycle path
  std::vector<int> m_edge_to;   // keeps track of child-parent relationship
  std::stack<int> m_cycle_path; // stack that contains path of cycle
  bool hasCycle(Graph& g) { // performs DFS and returns if we have cycle
    for (int i = 0; i < g.vertices(); i++) {
      if (!m_marked[i]) dfs(g, i);
    }
    return !m_cycle_path.empty();
  }
  void dfs(Graph& g, int v) {
    m_on_stack[v] = true;
    m_marked[v] = true;
    for (int w : g.adj(v)) {
      if (!m_cycle_path.empty()) return; // already found cycle, gtfo
      else if (!m_marked[w]) {  // normal dfs recursive subroutine
        m_edge_to[w] = v;
        dfs(g, w);
      }
      else if (m_on_stack[w]) { // we found a cycle, populate our stack
        m_cycle_path = std::stack<int>();
        for (int x = v; x != w; x = m_edge_to[x]) {
          m_cycle_path.push(x);
        }
        m_cycle_path.push(w);
        m_cycle_path.push(v);
      }
    }
    m_on_stack[v] = false;
  }
};
} // namespace leetcode

#endif
