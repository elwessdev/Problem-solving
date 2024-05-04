/*
 * @lc app=leetcode id=520 lang=cpp
 *
 * [520] Detect Capital
 */

// @lc code=start
class Solution {
public:
    bool detectCapitalUse(string word) {
        bool allUpper=true;
        bool allLow=true;
        bool fUpperToLower=true;

        for(int i=0;i<word.size();i++){
            if(!isupper(word[i])) allUpper=false;
            if(!islower(word[i])) allLow=false;
            if(i>0&&(islower(word[0])||isupper(word[i]))) fUpperToLower=false;
        }
        return (allUpper||allLow||fUpperToLower);
    }
};
// @lc code=end

