/*
 * @lc app=leetcode id=482 lang=cpp
 *
 * [482] License Key Formatting
 */

// @lc code=start
class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int cnt=0;
        string ans="";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='-') continue;
            if(cnt==k){
                ans+='-';
                cnt=0;
            }
            ans+=toupper(s[i]);
            cnt++;
        }
        for(int i=0;i<ans.size()/2;i++){
            swap(ans[i],ans[ans.size()-i-1]);
        }
        return ans;
    }
};
// @lc code=end

