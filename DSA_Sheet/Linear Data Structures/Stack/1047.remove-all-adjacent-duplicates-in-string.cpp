/*
 * @lc app=leetcode id=1047 lang=cpp
 *
 * [1047] Remove All Adjacent Duplicates In String
 */

// @lc code=start
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string ans="";
        for(auto c:s){
            if(st.empty()){
                st.push(c);
            } else {
                if(st.top()==c) st.pop();
                else st.push(c);
            }
        }
        while(!st.empty()) ans=st.top()+ans, st.pop();
        return ans;
    }
};
// @lc code=end

