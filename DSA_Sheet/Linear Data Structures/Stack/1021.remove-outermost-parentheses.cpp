/*
 * @lc app=leetcode id=1021 lang=cpp
 *
 * [1021] Remove Outermost Parentheses
 */

// @lc code=start
class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        int k=1;
        for(int i=1;i<s.size();i++){
            if(s[i]==')') k--;
            else k++;
            if(k>0) st.push(s[i]);
            else k=1,i++;
        }

        string ans="";
        while(!st.empty()) ans=st.top()+ans, st.pop();
        return ans;
    }
};
// @lc code=end

