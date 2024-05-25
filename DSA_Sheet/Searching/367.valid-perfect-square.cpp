/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        int l=2;
        int r=num;
        while(l < r){
            signed long int mid=l+(r-l)/2;
            if(mid*mid==num) return true;
            if(mid*mid<num) l=mid+1;
            else r=mid;
        }
        return false;
    }
};
// @lc code=end

