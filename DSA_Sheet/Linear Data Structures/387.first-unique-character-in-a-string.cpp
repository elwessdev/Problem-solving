/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        queue<char> q;
        unordered_map<char,int> hmp;

        for(auto c:s) hmp[c]++;
        for(auto c:s) q.push(c);

        int idx=0;
        while(!q.empty()){
            if(hmp[q.front()]==1) break;
            else q.pop();
            idx++;
        }
        if(idx==s.size()) return -1;
        else return idx;
    }
};
// @lc code=end

