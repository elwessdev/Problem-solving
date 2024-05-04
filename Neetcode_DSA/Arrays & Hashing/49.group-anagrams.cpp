/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> hmp;
        vector<vector<string>>ans;
        for(auto str:strs){
            string sstr=str;
            sort(sstr.begin(),sstr.end());
            hmp[sstr].push_back(str);
        }
        for (const auto& pair:hmp) ans.push_back(pair.second);
        return ans;
    }
};
// @lc code=end

