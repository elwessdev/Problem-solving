/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //=> O(n log n)
        // Bubble sort 
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<nums.size()-i-1;j++){
        //         if(nums[j]>nums[j+1]) swap(nums[j],nums[j+1]);
        //     }
        // }
        // sort(nums.begin(),nums.end());
        // int n=0;
        // while(n<=nums.size()){
        //     if(!binary_search(nums.begin(),nums.end(),n)) return n;
        //     n++;
        // }

        //=> mathematical approach - O(n)
        int sum=accumulate(nums.begin(),nums.end(),0);
        return ((nums.size()*(nums.size()+1))/2)-sum;
    }
};
// @lc code=end

