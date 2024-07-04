/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        // n&(4-1)!=0
        if(n<=0||n%4!=0) return false;
        return isPowerOfFour(n/4);
    }
};
// @lc code=end

