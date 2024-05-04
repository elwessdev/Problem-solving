/*
 * @lc app=leetcode id=1614 lang=cpp
 *
 * [1614] Maximum Nesting Depth of the Parentheses
 */

// @lc code=start
class Solution {
public:
    int maxDepth(string s) {
        int maxDepth(string s) {
        int cnt=0;
        int max=0;
        for(auto p:s){
            if(p=='(') cnt++;
            if(p==')') cnt--;
            if(max<cnt) max=cnt;
        }
        return max;
    }
    }
};
// @lc code=end

