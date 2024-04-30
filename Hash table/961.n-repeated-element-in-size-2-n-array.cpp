/*
 * @lc app=leetcode id=961 lang=cpp
 *
 * [961] N-Repeated Element in Size 2N Array
 */

// @lc code=start
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> hashTable;
        for(int n:nums){
            if(hashTable[n]>0) return n;
            hashTable[n]++;
        }
        return 0;
    }
};
// @lc code=end

