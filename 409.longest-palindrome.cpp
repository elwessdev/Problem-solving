/*
 * @lc app=leetcode id=409 lang=cpp
 *
 * [409] Longest Palindrome
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> hashmap;
        for(auto str:s){
            hashmap[str]++;
        }
        int longest=0;
        bool odd=false;
        for(auto m:hashmap){
            if(m.second%2==0) longest+=m.second;
            else{
                odd=true;
                longest+=m.second-1;
            }
        }
        return longest+odd;
    }
};
// @lc code=end

