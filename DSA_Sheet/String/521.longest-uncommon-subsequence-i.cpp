/*
 * @lc app=leetcode id=521 lang=cpp
 *
 * [521] Longest Uncommon Subsequence I
 */

// @lc code=start
class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a==b) return -1;
        if(a.size()>b.size()) return a.size();
        return b.size();
    }
};
// @lc code=end

