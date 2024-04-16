/*
 * @lc app=leetcode id=500 lang=cpp
 *
 * [500] Keyboard Row
 */

// @lc code=start
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int> hashTable;
        string row1="qwertyuiop";
        string row2="asdfghjkl";
        string row3="zxcvbnm";

        vector<string> valid;

        for(int i=0;i<(int)row1.size();i++){
            hashTable[row1[i]]=1;
        }
        for(int i=0;i<(int)row2.size();i++){
            hashTable[row2[i]]=2;
        }
        for(int i=0;i<(int)row3.size();i++){
            hashTable[row3[i]]=3;
        }

        for(int i=0;i<words.size();i++){
                int idx=hashTable[tolower(words[i][0])];
            for(int j=1;j<words[i].size();j++){
                if(idx!=hashTable[tolower(words[i][j])]){
                    break;
                }
                if(j==words[i].size()-1){
                    valid.push_back(words[i]);
                }
            }
        }
        return valid;
    }
};
// @lc code=end

