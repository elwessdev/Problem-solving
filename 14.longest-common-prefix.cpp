/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        for(int i=0;i<strs[0].size();i++){
            for(auto str:strs){
                if(i==str.size()||str[i]!=strs[0][i]){
                    return ans;
                }
            }
            ans+=strs[0][i];
        }
        return ans;
    }
};
// @lc code=end

