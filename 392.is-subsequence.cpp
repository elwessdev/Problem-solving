/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */

// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {
        queue<char> q;
        for(char c:s) q.push(c);
        for(char c:t){
            if(c==q.front()) q.pop();
        }
        if(q.empty()) return true;
        return false;

        // int i=0,j=0;
        // while(i<s.length()&&j<t.length()){
        //   if(s[i]==t[j]) i++;
        //   j++;
        // }
        // return (i==s.length()) ?true :false;
    }
};
// @lc code=end

