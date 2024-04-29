/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> hashSet;
        vector<int> res;
        for(auto n:nums1) hashSet.insert(n);
        for(auto n:nums2){
            if(hashSet.find(n) != hashSet.end()){
                res.push_back(n);
                hashSet.erase(hashSet.find(n));
            }
        }
        return res;
    }
};
// @lc code=end

