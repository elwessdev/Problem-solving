/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        // unordered_map<char,int> s_ht;
        // unordered_map<char,int> t_ht;
        // if(s.size()!=t.size()){
        //     return false;
        // } else {
        //     for(int i=0;i<s.size();i++){
        //         s_ht[s[i]]++;
        //         t_ht[t[i]]++;
        //     }
        //     for(int i=0;i<s.size();i++){
        //         if(s_ht[s[i]]!=t_ht[s[i]]){
        //             return false;
        //         }
        //     }
        // }

        unordered_map<char,int> hashtable;
        if(s.size()!=t.size()){
            return false;
        } else {
            for(auto ch:s){
                hashtable[ch]++;
            }
            for(auto ch:t){
                hashtable[ch]--;
            }
            for(auto n:hashtable){
                if(n.second!=0) return false;
            }
        }
        return true;
    }
};
// @lc code=end

