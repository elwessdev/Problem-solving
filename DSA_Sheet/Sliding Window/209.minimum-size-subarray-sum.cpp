/*
 * @lc app=leetcode id=209 lang=cpp
 *
 * [209] Minimum Size Subarray Sum
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minL=INT_MAX;
        int p1=0,p2=0;
        int curSum=0;
        while(p2<nums.size()){
            curSum+=nums[p2];
            while(curSum>=target){
                minL=min(minL,p2-p1+1);
                curSum-=nums[p1];
                p1++;
            }
            p2++;
        }
        return minL==INT_MAX ?0 :minL;
    }
};
// @lc code=end

