/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        string newStr="";
        for(int i=0;i<s.size();i++){
            if(
            (s[i]>='a'&&s[i]<='z')||
            (s[i]>='A'&&s[i]<='Z')||
            (s[i]>='0'&&s[i]<='9')) newStr+=tolower(s[i]);
        }
        cout<<newStr<<endl;
        if(newStr.size()==1) return true;
        for(int i=0;i<newStr.size()/2;i++){
            if(newStr[i]!=newStr[newStr.size()-i-1]) return false;
        }
        return true;
    }
};
// @lc code=end

