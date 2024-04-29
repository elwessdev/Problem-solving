/*
 * @lc app=leetcode id=2114 lang=cpp
 *
 * [2114] Maximum Number of Words Found in Sentences
 */

// @lc code=start
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(auto sent:sentences){
            int wo=0;
            for(int i=0;i<sent.size();i++){
                if(sent[i]==' '||i==sent.size()-1) wo++;
            }
            ans=max(ans,wo);
        }
        return ans;
    }
};
// @lc code=end

