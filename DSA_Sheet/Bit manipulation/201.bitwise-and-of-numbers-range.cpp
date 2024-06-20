/*
 * @lc app=leetcode id=201 lang=cpp
 *
 * [201] Bitwise AND of Numbers Range
 */

// @lc code=start
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int ans=0;
        while(right!=left){
            left>>=1;
            right>>=1;
            ans++;
        }
        return left<<ans;
    }
};
// @lc code=end

