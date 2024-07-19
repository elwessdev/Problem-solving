/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string cur="";
        vector<string> ans;
        backtrack(n,cur,0,0,ans);
        return ans;
    }
    void backtrack(int n,string& cur,int leftP,int rightP,vector<string>& ans){
        if(cur.size()==n*2){
            ans.push_back(cur);
            return;
        }
        if(leftP<n){
            cur+="(";
            backtrack(n,cur,leftP+1,rightP,ans);
            cur.pop_back();
        }
        if(rightP<leftP){
            cur+=")";
            backtrack(n,cur,leftP,rightP+1,ans);
            cur.pop_back();
        }
    }
};
// @lc code=end

