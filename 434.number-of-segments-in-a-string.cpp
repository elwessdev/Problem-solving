/*
 * @lc app=leetcode id=434 lang=cpp
 *
 * [434] Number of Segments in a String
 */

// @lc code=start
class Solution {
public:
    int countSegments(string s) {
        vector<string> ans;
        string word="";
        for(int i=0;i<s.size();i++){
        if(i==s.size()-1&&s[i]!=' ') word+=s[i];
            if((s[i]==' '||i==s.size()-1)&&word.size()>0){
            cout<<word<<endl;
            ans.push_back(word);
            word="";
            continue;
            }
            if(s[i]!=' ') word+=s[i];
        }
        return ans.size();
    }
};
// @lc code=end

