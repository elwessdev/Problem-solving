/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */

// @lc code=start
class Solution {
public:
    string reverseVowels(string s) {
        string ans=s, vowels="aeiouAEIOU";
        int i=0, j=s.size()-1;
        while(i<j){
            bool iCheck = vowels.find(s[i])<=vowels.size()-1;
            bool jCheck = vowels.find(s[j])<=vowels.size()-1;
            if(iCheck&&jCheck){
                swap(ans[i],ans[j]);
                i++,j--;
            }
            if(!iCheck) i++;
            if(!jCheck) j--;
        }
        return ans;
    }
};
// @lc code=end

