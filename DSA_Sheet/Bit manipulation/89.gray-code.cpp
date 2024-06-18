/*
 * @lc app=leetcode id=89 lang=cpp
 *
 * [89] Gray Code
 */

// @lc code=start
class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;
        for(int i=0;i<(1<<n);i++){
            ans.push_back(i^(i>>1));
            cout<<i<<" "<<(i>>1)<<" "<<(i^(i>>1))<<endl;
        }
        return ans;
    }
};
// @lc code=end

