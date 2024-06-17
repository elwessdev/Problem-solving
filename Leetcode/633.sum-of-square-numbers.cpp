/*
 * @lc app=leetcode id=633 lang=cpp
 *
 * [633] Sum of Square Numbers
 */

// @lc code=start
class Solution {
public:
    bool judgeSquareSum(int c) {
        long l=0, r=std::sqrt(c);
        while(l<=r){
            long sum=l*l+r*r;
            if(sum==c) return true;
            if(sum>c) r--;
            else l++;
        }
        return false;
    }
};
// @lc code=end

