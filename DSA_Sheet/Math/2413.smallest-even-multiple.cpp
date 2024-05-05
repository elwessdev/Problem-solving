/*
 * @lc app=leetcode id=2413 lang=cpp
 *
 * [2413] Smallest Even Multiple
 */

// @lc code=start
class Solution {
public:
    int smallestEvenMultiple(int n) {
        return (n%2==0&&n%n==0) ?n :n*2;
    }
};
// @lc code=end

