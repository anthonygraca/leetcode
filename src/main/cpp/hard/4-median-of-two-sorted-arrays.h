#ifndef LEETCODE_HARD_4_MEDIAN_OF_TWO_SORTED_ARRAYS_H_
#define LEETCODE_HARD_4_MEDIAN_OF_TWO_SORTED_ARRAYS_H_

/**
 * Median of Two Sorted Arrays
 *
 * @link https://leetcode.com/problems/median-of-two-sorted-arrays/
 *
 * Given two sorted arrays nums1 and nums2 of size m and n respectively, return
 * the median of the two sorted arrays.
 *
 * The overall run time complexity should be O(log (m+n)).
 *
 * Solved by: Ayush Joshi <https://github.com/joshiayush>
 */

#include <algorithm>
#include <cstdint>
#include <limits>  // numeric_limits<_T>::lowest(), numeric_limits<_T>::max()
#include <vector>

namespace leetcode {
class MedianOfTwoSortedArrays {
 public:
  // Finds the median of two sorted arrays
  //
  // This function takes in two sorted arrays either of same size or of
  // different and returns the median element those two arrays would've formed
  // if we would have merged them together.
  //
  // This function does not merge the actual arrays in order to find the median
  // of these two sorted arrays but applies a binary search or rather say
  // modified version of binary search algorithm to find the median of those two
  // sorted arrays without actually merging them together.
  double findMedianSortedArrays(const ::std::vector<::std::int64_t> &nums1,
                                const ::std::vector<::std::int64_t> &nums2) {
    ::std::int64_t nums1len = nums1.size();
    ::std::int64_t nums2len = nums2.size();

    // We want to run our modified binary search algorithm over the array that
    // has minimum number of elements in it the reason we do this is because the
    // middle index in the array that has minimum number of elements will
    // determine the middle index in other array; so flip the parameters.
    if (nums1len > nums2len)
      return findMedianSortedArrays(nums2, nums1);

    ::std::int64_t low = 0;
    ::std::int64_t high = nums1len;

    while (low <= high) {
      // We'll be refering the index number and elements of 'nums1' as *X and
      // 'nums2' as *Y.

      // Determining the partition index for 'nums1' in this particular
      // iteration.
      ::std::int64_t partX = (low + high) / 2;
      // Calculating the partition index for 'nums2' using 'partX'.
      ::std::int64_t partY = ((nums1len + nums2len + 1) / 2) - partX;

      // We also want to make sure that the partition index is always in bounds.
      ::std::int64_t max_leftX =
          (partX == 0) ? ::std::numeric_limits<::std::int64_t>::lowest()
                       : nums1[partX - 1];
      ::std::int64_t min_rightX =
          (partX == nums1len) ? ::std::numeric_limits<::std::int64_t>::max()
                              : nums1[partX];

      // We also want to make sure that the partition index is always in bounds.
      ::std::int64_t max_leftY =
          (partY == 0) ? ::std::numeric_limits<::std::int64_t>::lowest()
                       : nums2[partY - 1];
      ::std::int64_t min_rightY =
          (partY == nums2len) ? ::std::numeric_limits<::std::int64_t>::max()
                              : nums2[partY];

      // Now we want to check if the order we get from the partition index
      // satisfies the order we'll get after merging these two arrays; if yes
      // then we've found the right partition index otherwise we have to update
      // either the 'high' or the 'low' pointer to calculate a right partition
      // index.
      if (max_leftX <= min_rightY && max_leftY <= min_rightX) {
        if ((nums1len + nums2len) % 2 == 0) {
          // We want to return the average of the maximum element at the left
          // partition and the minimum element at the right partition in case
          // the resulting array would have an even number of elements.
          return (::std::max(max_leftX, max_leftY) +
                  ::std::min(min_rightX, min_rightY)) /
                 double(2);
        } else {
          // We want to return the maximum element at the left partition in case
          // the resulting array would have an odd number of elements.
          return double(::std::max(max_leftX, max_leftY));
        }
      } else if (max_leftX > min_rightY) {
        // If in our left partition of our 'nums1' array there happens to be an
        // element that is greater than the element in our right partition of
        // 'nums2' array then that means the partition is incorrect and we want
        // to update the 'high' pointer in order go towards the left of the
        // 'nums1' array to find a partition index.
        //
        // Note: This change is going to push the 'partY' to the right of the
        // 'nums2' array.
        high = partX - 1;
      } else {
        // If in our left partition of our 'nums1' array there happens to be an
        // element that is smaller than the element in our right partition of
        // 'nums2' array and the top most condition does not hold true then that
        // means the partition is still incorrect and we want to update the
        // 'low' pointer in order go towards the right of the 'nums1' array to
        // find a partition index.
        //
        // Note: This change is going to pull the 'partY' to the left of the
        // 'nums2' array.
        low = partX + 1;
      }
    }

    // We failed to find the median of the given sorted arrays.
    return ::std::numeric_limits<double>::lowest();
  }
};
}  // namespace leetcode

#endif
