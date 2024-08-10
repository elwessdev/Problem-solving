/*
 * @lc app=leetcode id=670 lang=cpp
 *
 * [670] Maximum Swap
 */

// @lc code=start
class Solution {
public:
    int maximumSwap(int num) {
        deque<int> nums;
        while(num){
            nums.push_front(num%10);
            num/=10;
        }
        int swp=0;
        for(int i=0;i<nums.size();i++){
            int cur_maxi=i;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]>=nums[cur_maxi]) cur_maxi=j;
            }
            if(nums[cur_maxi]>nums[i]){
                swap(nums[i],nums[cur_maxi]);
                swp++;
            }
            if(swp==1) break;
        }
        int ans=0;
        for(auto& n:nums){
            ans=ans*10+n;
        }
        return ans;
    }
};
// @lc code=end

