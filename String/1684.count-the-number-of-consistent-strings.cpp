/*
 * @lc app=leetcode id=1684 lang=cpp
 *
 * [1684] Count the Number of Consistent Strings
 */

// @lc code=start
class Solution {
public:
    bool validStr(string str, map<char,int> mp){
        for(int i=0;i<str.size();i++){
            if(mp[str[i]]!=1) return false;
        }
        return true;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0;
        map<char,int> mp;
        for(auto c:allowed) mp[c]=1;
        for(auto word:words) ans+=validStr(word,mp);
        return ans;
    }
};
// @lc code=end

