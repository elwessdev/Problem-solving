/*
 * @lc app=leetcode id=1351 lang=cpp
 *
 * [1351] Count Negative Numbers in a Sorted Matrix
 */

// @lc code=start
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt=0;
        for(int i=0;i<grid.size();i++){
            int j=0;
            while(j<grid[0].size()){
                if(grid[i][grid[0].size()-j-1]<0){
                    cnt++;
                    j++;
                } else {
                    break;
                }
            }
        }
        return cnt;
    }
};
// @lc code=end

