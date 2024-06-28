/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) return 0;
        int ans=0, p1=0, p2=0;
        unordered_map<char,int> hmp;
        while(p2<s.size()){
            if(hmp.count(s[p2])&&hmp[s[p2]]>=p1){
                p1 = hmp[s[p2]] + 1;
            }
            hmp[s[p2]]=p2;
            ans=std::max(ans,p2-p1+1);
            ++p2;
        }
        return ans;
    }
};
// @lc code=end

