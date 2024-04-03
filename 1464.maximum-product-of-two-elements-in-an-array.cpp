/*
 * @lc app=leetcode id=1464 lang=cpp
 *
 * [1464] Maximum Product of Two Elements in an Array
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1=INT_MIN;
        int max2=INT_MIN;
        for(int num:nums){
            if(num>=max1){
                max2=max1;
                max1=num;
            } else if(num>max2){
                max2=num;
            }
        }
        return (max1-1)*(max2-1);
    }
};
// @lc code=end

