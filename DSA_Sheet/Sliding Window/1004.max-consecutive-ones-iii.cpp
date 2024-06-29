/*
 * @lc app=leetcode id=1004 lang=cpp
 *
 * [1004] Max Consecutive Ones III
 */

// @lc code=start
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int mxOnes=0;
        int z=0;
        int p1=0,p2=0;
        while(p2<nums.size()){
            if(nums[p2]==0) z++;
            while(z>k) z-=!(nums[p1]), p1++;
            mxOnes=max(mxOnes, p2-p1+1);
            p2++;
        }
        return mxOnes;
    }
};
// @lc code=end

