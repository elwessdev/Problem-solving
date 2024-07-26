/*
 * @lc app=leetcode id=1221 lang=cpp
 *
 * [1221] Split a String in Balanced Strings
 */

// @lc code=start
class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0;
        string cur="";
        int l=0,r=0;
        for(int i=0;i<s.size();i++){
            if(l==r){
                ans++;
                cur="";
                l=0,r=0;
            }
            if(s[i]=='L') l++;
            if(s[i]=='R') r++;
        }
        return ans;
    }
};
// @lc code=end

