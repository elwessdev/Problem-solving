/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution {
public:
    int ps(int r, int c, vector<vector<long long>>& memo){
        if(r==c||c==0) return 1;
        if(memo[r][c]!=-1){
            cout<<r<<"-"<<c<<" "<<memo[r][c]<<endl;
            return memo[r][c];
        }
        // cout<<rowIndex<<" "<<i<<" "<<" => "<<an<<endl;
        memo[r][c]=ps(r-1,c,memo)+ps(r-1,c-1,memo);
        return memo[r][c];
    }
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        vector<vector<long long>> memo(rowIndex+1, vector<long long>(rowIndex+1,-1));
        for(int i=0;i<=rowIndex;i++){
            int an=ps(rowIndex,i,memo);
            ans.push_back(an);
        }
        return ans;
    }
};
// @lc code=end

