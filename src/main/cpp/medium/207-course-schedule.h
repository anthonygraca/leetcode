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

namespace leetcode {
class CourseSchedule {
public:
  bool canFinish(int num_courses, std::vector<std::vector<int>>& prerequisites) {
    return true;
  }
};
} // namespace leetcode

#endif
