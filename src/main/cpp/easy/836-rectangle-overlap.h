#ifndef LEETCODE_EASY_836_RECTANGLE_OVERLAP_H_
#define LEETCODE_EASY_836_RECTANGLE_OVERLAP_H_

/*
  An axis-aligned rectangle is represented as a list [x1, y1, x2, y2], where 
  (x1, y1) is the coordinate of its bottom-left corner, and (x2, y2) is the 
  coordinate of its top-right corner. Its top and bottom edges are parallel to 
  the X-axis, and its left and right edges are parallel to the Y-axis.

  Two rectangles overlap if the area of their intersection is positive. To be 
  clear, two rectangles that only touch at the corner or edges do not overlap.

  Given two axis-aligned rectangles rec1 and rec2, return true if they 
  overlap, otherwise return false.


  Constraints:
  * rect1.length == 4
  * rect2.length == 4
  * -10^9 <= rec1[i], rec2[i] <= 10^9
  * rec1 and rec2 represent a valid rectangle with a non-zero area.
 */

#include <vector>

namespace leetcode {
class RectangleOverlap {
public:
  bool isOverlap(std::vector<int>& r1, std::vector<int>& r2) {
    if (r1[0] < r2[2] && r2[0] < r1[2] && r1[1] < r2[3] && r2[1] < r1[3]) {
      return true;
    }
    return false;
  }
};
} // namespace leetcode

#endif
