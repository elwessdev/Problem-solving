/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string,vector<int>> hmp;
        for(int i=0;i<strs.size();i++){
            string sstr=strs[i];
            sort(sstr.begin(),sstr.end());
            hmp[sstr].push_back(i);
        }
        for (const auto& pair:hmp) {
            vector<string>tempAns;
            for (int idx:pair.second) tempAns.push_back(strs[idx]);
            ans.push_back(tempAns);
            tempAns.clear();
        }
        return ans;
    }
};
// @lc code=end

