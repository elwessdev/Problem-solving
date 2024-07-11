/*
 * @lc app=leetcode id=47 lang=cpp
 *
 * [47] Permutations II
 */

// @lc code=start
class Solution {
public:
    void bt(vector<int>& nums, vector<vector<int>>& ans, unordered_map<int,int>& freqMap, vector<int>& cur){
        if(cur.size()==nums.size()){
            ans.push_back(cur);
            for(auto& c:cur){
                cout<<c<<" ";
            }
            cout<<"\n";
            return;
        }
        for(auto& num:freqMap){
            if(num.second>0){
                cur.push_back(num.first);
                freqMap[num.first]--;
                bt(nums,ans,freqMap,cur);
                freqMap[num.first]++;
                cur.pop_back();
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int,int> freqMap;
        vector<int> cur;
        for(auto& n:nums) freqMap[n]++;
        bt(nums,ans,freqMap,cur);
        return ans;
    }
};
// @lc code=end

