/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int p1=0,p2=height.size()-1;
        while(p1<=p2){
            int cap=min(height[p1],height[p2])*(p2-p1);
            ans=max(ans,cap);
            if(height[p1]<=height[p2]) p1++;
            else p2--;
        }
        return ans;
    }
};
// @lc code=end

