/*
 * @lc app=leetcode id=2022 lang=cpp
 *
 * [2022] Convert 1D Array Into 2D Array
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if((m*n)!=original.size()) return vector<vector<int>>();
        vector<vector<int>> ans(m,vector<int>(n));
        int row=0, col=0;
        for(int i=0;i<original.size();i++){
            // if((col+1)>n) col=0, row++;
            // ans[row][col]=original[i];
            // col++;
            ans[i/n][i%n]=original[i];
        }
        return ans;
    }
};
// @lc code=end

