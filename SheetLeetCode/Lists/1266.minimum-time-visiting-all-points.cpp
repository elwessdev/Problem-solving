/*
 * @lc app=leetcode id=1266 lang=cpp
 *
 * [1266] Minimum Time Visiting All Points
 */

// @lc code=start
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int times=0;
        for(int i=0;i<points.size()-1;i++){
            times+=std::max(std::abs(points[i][0]-points[i+1][0]),std::abs(points[i][1]-points[i+1][1]));
        }
        return times;
    }
};
// @lc code=end

