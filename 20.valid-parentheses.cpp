/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> mp={{']','['},{')','('},{'}','{'}};
        stack<char> ans;
        if(s.size()<=1) return false;
        for(auto c:s){
            if(mp.count(c)) {
                if(!ans.empty()&&mp[c]==ans.top()) ans.pop();
                else return false;
            } else ans.push(c);
        }
        return ans.empty();
    }
};
// @lc code=end

