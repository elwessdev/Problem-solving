/*
 * @lc app=leetcode id=1232 lang=cpp
 *
 * [1232] Check If It Is a Straight Line
 */

// @lc code=start
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size()<=2) return true;
        int x1=coordinates[0][0];
        int y1=coordinates[0][1];
        int x2=coordinates[1][0];
        int y2=coordinates[1][1];
        for(auto points:coordinates){
            int x=points[0];
            int y=points[1];
            int crossProduct=(x-x1)*(y2-y1)-(y-y1)*(x2-x1);
            if(crossProduct!=0) return false;
        }
        return true;
    }
};
// @lc code=end

