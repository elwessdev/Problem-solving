/*
 * @lc app=leetcode id=713 lang=cpp
 *
 * [713] Subarray Product Less Than K
 */

// @lc code=start
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int ans=0;
        int p1=0,p2=0;
        int curProd=1;
        while(p2<nums.size()){
            curProd*=nums[p2];
            while(curProd>=k) curProd/=nums[p1], p1++;
            ans+=p2-p1+1;
            p2++;
        }
        return ans;
    }
};
// @lc code=end