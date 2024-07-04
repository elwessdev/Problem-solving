/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    int rec(int r,int c,vector<vector<int>>& memo){
        if(r==c||c==0) return 1;
        if(memo[r][c]!=-1) return memo[r][c];
        memo[r][c] = rec(r-1,c,memo)+rec(r-1,c-1,memo);
        return memo[r][c];
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<vector<int>> memo(numRows,vector<int>(numRows,-1));
        for(int r=0;r<numRows;r++){
            vector<int> temp;
            for(int c=0;c<=r;c++) temp.push_back(rec(r,c,memo));
            ans.push_back(temp);
        }
        return ans;
    }
};
// @lc code=end

