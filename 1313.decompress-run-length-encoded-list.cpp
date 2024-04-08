/*
 * @lc app=leetcode id=1313 lang=cpp
 *
 * [1313] Decompress Run-Length Encoded List
 */

// @lc code=start
class Solution {
public:
    // vector<int> decompressRLElist(vector<int>& nums) {
    //     vector<int> res=recNums(nums);
    //     return res;
    // }
    // vector<int> recNums(vector<int>& nums,int n=0){
    //     if(n>=nums.size()){
    //         return {};
    //     }
    //     int freq=nums[n];
    //     int val=nums[n+1];
    //     vector<int> subArr(freq,val);
    //     vector<int> remaining = recNums(nums,n+2);
    //     subArr.insert(subArr.end(),remaining.begin(),remaining.end());
    //     return subArr;
    // }
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> newNums;
        for(int i=0;i<nums.size();i+=2){
            newNums.insert(newNums.end(),nums[i],nums[i+1]);
        }
        return newNums;
    }
};
// @lc code=end

