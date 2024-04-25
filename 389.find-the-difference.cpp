/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> S_hashTable;
        unordered_map<char,int> T_hashTable;
        for(auto ch:s) S_hashTable[ch]++;
        for(auto ch:t) T_hashTable[ch]++;
        for(auto h:T_hashTable){
            if(h.second!=S_hashTable[h.first]) return h.first;
        }
        return ' ';
    }
};
// @lc code=end

