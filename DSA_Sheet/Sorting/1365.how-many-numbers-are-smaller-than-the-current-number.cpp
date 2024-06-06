/*
 * @lc app=leetcode id=1365 lang=cpp
 *
 * [1365] How Many Numbers Are Smaller Than the Current Number
 */

// @lc code=start
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // sorting array with bubble sort
        vector<int> srtArr=nums;
        for(int i=0;i<srtArr.size();i++){
            for(int j=0;j<srtArr.size()-i-1;j++){
                if(srtArr[j]>srtArr[j+1]) swap(srtArr[j],srtArr[j+1]);
            }
        }
        // adding to hashmap
        map<int,int> hmp;
        for(int i=0;i<srtArr.size();i++){
            if(!hmp.count(srtArr[i])) hmp[srtArr[i]]=i;
        }
        // change array element with index from Hashmap
        for(int i=0;i<nums.size();i++) nums[i]=hmp[nums[i]];
        return nums;
    }
};
// @lc code=end

