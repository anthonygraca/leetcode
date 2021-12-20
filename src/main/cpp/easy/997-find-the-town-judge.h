#ifndef LEETCODE_EASY_997_FIND_THE_TOWN_JUDGE_H_
#define LEETCODE_EASY_997_FIND_THE_TOWN_JUDGE_H_

/**
 * Find the Town Judge
 *
 * In a town, there are n people labeled from 1 to n. There is a rumor that one
 * of these people is secretly the town judge.
 *
 * If the town judge exists, then:
 *
 *   - The town judge trusts nobody.
 *   - Everybody (except for the town judge) trusts the town judge.
 *   - There is exactly one person that satisfies properties 1 and 2.
 *
 * You are given an array trust where trust[i] = [ai, bi] representing that the
 * person labeled ai trusts the person labeled bi.
 *
 * Return the label of the town judge if the town judge exists and can be
 * identified, or return -1 otherwise.
 *
 * @link https://leetcode.com/problems/find-the-town-judge/
 *
 * Solved by: Ayush Joshi <https://github.com/joshiayush>
 */

#include <cstdint>
#include <vector>

namespace leetcode {
class FindTheTownJudge {
 public:
  // Finds the one single person that is the town judge.
  //
  // This function finds the one single person that does not trust anybody in
  // the town but everybody trusts him/her and this person is basically judging
  // every person around the town; to make sure that you don't mess up in front
  // of him/her we need to find this person.
  ::std::int64_t findJudge(
      ::std::uint16_t n,
      const ::std::vector<::std::vector<::std::int64_t>>& trust) {
    ::std::int16_t judge = -1;

    // We basically need to track that one single person who has got the trust
    // of everyone and for that we use the index of 'countTrustArray' as trust
    // count, the index that will have the trust count of 'n - 1' (remmember we
    // need to exclude the judge as well) will be the town judge.
    ::std::int64_t* countTrustArray = new ::std::int64_t[n + 1];
    for (::std::uint16_t i = 0; i < n + 1; ++i)
      countTrustArray[i] = 0;

    for (const auto& t : trust) {
      // We need to keep decrementing the trust counter of those people who
      // trust someone in the town.
      --countTrustArray[t[0]];
      // We need to keep incrementing the counter for those people who've got
      // the trust of someone in the town.
      ++countTrustArray[t[1]];
    }

    for (::std::uint16_t i = 1; i <= n; ++i) {
      // Returns the index (label of that person) once we find the trust counter
      // equals to 'n - 1'.
      if (countTrustArray[i] == n - 1) {
        judge = i;
        break;
      }
    }

    delete[] countTrustArray;
    // Returns '-1' if we don't find a judge in the town.
    return judge;
  }
};
}  // namespace leetcode

#endif