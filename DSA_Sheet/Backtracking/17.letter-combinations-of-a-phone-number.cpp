/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution {
public:
    void backtrack(string digits,int idx,vector<string> letters,string& cur,vector<string>& ans){
        if(cur.size()==digits.size()){
            ans.push_back(cur);
            return;
        }
        for(int i=0;i<letters[digits[idx]-'0'].size();i++){
            cur+=letters[digits[idx]-'0'][i];
            backtrack(digits,idx+1,letters,cur,ans);
            cur.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> letters = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        string cur="";
        int idx=0;
        if(!digits.empty()) backtrack(digits,idx,letters,cur,ans);
        return ans;
    }
};
// @lc code=end

