/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int,int> sum;
        int sz=nums.size();
        for(int i=0;i<sz;i++){
            int re=target-nums[i];
            if(sum.count(re)){
                return {sum[re],i};
            }
            sum[nums[i]]=i;
        };
        return {};
    };
};
// @lc code=end

