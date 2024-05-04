/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        map<char,int> hashTable {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(s.size()>i+1&&hashTable[s[i]]<hashTable[s[i+1]]){
                sum-=hashTable[s[i]];
            } else {
                sum+=hashTable[s[i]];
            }
        }
        return sum;
    }
};
// @lc code=end

