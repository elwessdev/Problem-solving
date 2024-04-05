/*
 * @lc app=leetcode id=1260 lang=cpp
 *
 * [1260] Shift 2D Grid
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size(), n=grid[0].size();
        k%=m*n;
        if(k==0){
            return grid;
        }
        // Convert 2D to 1D
        vector<int> temp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                temp.push_back(grid[i][j]);
            }
        }

        // Shift element and convert to 2D position
        vector<int> v2(temp.size());
        for(int i=0;i<v2.size();i++){
            int new_idx=(i+k)%v2.size();
            v2[new_idx]=temp[i];
            grid[new_idx/n][new_idx%n]=v2[new_idx];
        }
        return grid;
    }
};
// @lc code=end

