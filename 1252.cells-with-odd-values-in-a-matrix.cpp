/*
 * @lc app=leetcode id=1252 lang=cpp
 *
 * [1252] Cells with Odd Values in a Matrix
 */

// @lc code=start
class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int sz=indices.size();
        vector<vector<int>> matrix(m,vector<int>(n,0));
        int odd=0;
        while(sz--){
            int r=indices[sz][0];
            int c=indices[sz][1];
            for(int i=0;i<n;i++){
                matrix[r][i]++;
            }
            for(int i=0;i<m;i++){
                matrix[i][c]++;
            }
        }
        for(auto r:matrix){
            for(int c:r){
                if(c%2!=0) odd++;
            }
        }
        return odd;
    }
};
// @lc code=end

