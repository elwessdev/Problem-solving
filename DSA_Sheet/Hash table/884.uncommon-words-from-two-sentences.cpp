/*
 * @lc app=leetcode id=884 lang=cpp
 *
 * [884] Uncommon Words from Two Sentences
 */

// @lc code=start
class Solution {
public:
    void toHashTable(unordered_map<string,int> &hashtable, string s){
        string str="";
        int sz=(int)s.size();
        for(int i=0;i<sz;i++){
            if(s[i]==' '){
                hashtable[str]++;
                str="";
                continue;
            } else if(i==sz-1){
                str+=s[i];
                hashtable[str]++;
                break;
            }
            str+=s[i];
        }
    }
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> hashtable;
        vector<string> res;

        toHashTable(hashtable,s1);
        toHashTable(hashtable,s2);

        for(auto a:hashtable){
            if(a.second==1) res.push_back(a.first);
        }
        return res;
    }
};
// @lc code=end

