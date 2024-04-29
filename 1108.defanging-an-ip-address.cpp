/*
 * @lc app=leetcode id=1108 lang=cpp
 *
 * [1108] Defanging an IP Address
 */

// @lc code=start
class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(auto c:address){
            if(c=='.') ans+="[.]";
            else ans+=c;
        }
        return ans;
    }
};
// @lc code=end

