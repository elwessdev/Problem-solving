/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> hashtable;
        // for(auto ran:ransomNote) hashtable[ran]++;
        // for(int i=0;i<magazine.size();i++){
        //     if(hashtable.count(magazine[i])&&
        //     hashtable[magazine[i]]!=0) hashtable[magazine[i]]--;
        // }
        // for(auto n:hashtable){
        //     if(n.second!=0){
        //         return false;
        //     }
        // }

        for(auto ran:magazine) hashtable[ran]++;
        for(int i=0;i<ransomNote.size();i++){
            if(hashtable[ransomNote[i]]>0){
                hashtable[ransomNote[i]]--;
            } else {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

