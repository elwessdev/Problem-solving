/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        int l=0, h=x;
        int ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            int cur=mid*mid;
            if(cur>x) h=mid-1;
            else if(cur<x) l=mid+1, ans=mid;
            else return mid;
        }
        return ans;
    }
};
// @lc code=end

