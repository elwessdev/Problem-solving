/*
 * @lc app=leetcode id=2864 lang=cpp
 *
 * [2864] Maximum Odd Binary Number
 */

// @lc code=start
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        if(s.size()==1) return s;
        int l=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') swap(s[i],s[l]), l++;
        }
        swap(s[s.size()-1],s[l-1]);
        return s;
    }
};
// @lc code=end

