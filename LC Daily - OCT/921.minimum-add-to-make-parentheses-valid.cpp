/*
 * @lc app=leetcode id=921 lang=cpp
 *
 * [921] Minimum Add to Make Parentheses Valid
 */

// @lc code=start
class Solution {
public:
    int minAddToMakeValid(string s) {
        int openPa=0, closePa=0;
        for(char &c:s){
            if(c=='(') openPa++;
            else if(c==')'&&openPa>0) openPa--;
            else closePa++;
        }
        return openPa+closePa;
    }
};
// @lc code=end

