/*
 * @lc app=leetcode id=1773 lang=cpp
 *
 * [1773] Count Items Matching a Rule
 */

// @lc code=start
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ruleKeyIndx=-1;
        int res=0;
        if(ruleKey=="type") ruleKeyIndx=0;
        if(ruleKey=="color") ruleKeyIndx=1;
        if(ruleKey=="name") ruleKeyIndx=2;
        for(int i=0;i<items.size();i++){
            if(items[i][ruleKeyIndx]==ruleValue){
                res++;
            }
        }
        return res;
    }
};
// @lc code=end

