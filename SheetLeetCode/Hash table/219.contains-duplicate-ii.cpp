/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> hashmap;
        for(int i=0;i<nums.size();i++){
            if(hashmap.count(nums[i])){
                if(abs(hashmap[nums[i]]-i)<=k){
                    return true;
                } else {
                    hashmap[nums[i]]=i;
                }
            } else {
                hashmap[nums[i]]=i;
            }
        }
        return false;
    }
};
// @lc code=end

