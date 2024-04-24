/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // if(s.size()!=t.size()){
        //   return false;
        // } else {
        //   unordered_map<char,int> S_hashTable;
        //   unordered_map<char,int> T_hashTable;
        //   for(int i=0;i<s.size();i++){
        //     if(S_hashTable.count(s[i])||T_hashTable.count(t[i])){
        //         if(T_hashTable[t[i]]!=s[i]||S_hashTable[s[i]]!=t[i]){
        //             return false;
        //         }
        //     }
        //     S_hashTable[s[i]]=t[i];
        //     T_hashTable[t[i]]=s[i];
        //   }
        // }
        // return true;
        int s_arr[256]={0}, t_arr[256]={0}, sz=s.size();
        if(sz!=t.size()){
        return false;
        } else {
        for(int i=0;i<sz;i++){
            if(s_arr[s[i]]!=t_arr[t[i]]) return false;
            s_arr[s[i]]=t_arr[t[i]]=i+1;
        }
        }
        return true;
    }
};
// @lc code=end

