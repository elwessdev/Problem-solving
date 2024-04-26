/*
 * @lc app=leetcode id=771 lang=cpp
 *
 * [771] Jewels and Stones
 */

// @lc code=start
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        // Testing
        unordered_map<char,int> hashTable;
        int sum=0;
        for(auto st:stones) hashTable[st]++;
        for(auto jw:jewels) sum+=hashTable[jw];
        return sum;
    }
};
// @lc code=end

