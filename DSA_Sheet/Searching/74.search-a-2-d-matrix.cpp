/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int row=0;
        // while(row<=matrix.size()-1&&target>matrix[row][matrix[0].size()-1]) row+=1;
        // if(row<=matrix.size()-1){
        //     int l=0, r=matrix[row].size()-1;
        //     while(l<=r){
        //         int mid=l+(r-l)/2;
        //         if(matrix[row][mid]==target) return true;
        //         if(target<matrix[row][mid]) r=mid-1;
        //         else l=mid+1;
        //     }
        // }
        // return false;

        int f = 0,l=(matrix.size()*matrix[0].size())-1;
        while(f<=l){
            int mid = (f+l)/2;
            int ind = mid/matrix[0].size();
            int jnd = mid%matrix[0].size();
            if(matrix[ind][jnd]==target)return true;
            else if(matrix[ind][jnd]<target) f=mid+1;
            else l = mid-1;
        }
        return false;
    }
};
// @lc code=end

