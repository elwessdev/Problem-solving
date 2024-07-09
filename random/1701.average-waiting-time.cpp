/*
 * @lc app=leetcode id=1701 lang=cpp
 *
 * [1701] Average Waiting Time
 */

// @lc code=start
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double ans=0;
        int prev=customers[0][0];
        for(auto &c){
            if(prev<customers[i][0]) prev=customers[i][0]+customers[i][1];
            else prev+=customers[i][1];
            ans+=prev-customers[i][0];
        }
        return ans/customers.size();
    }
};
// @lc code=end

