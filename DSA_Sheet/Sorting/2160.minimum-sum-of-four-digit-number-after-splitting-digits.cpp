/*
 * @lc app=leetcode id=2160 lang=cpp
 *
 * [2160] Minimum Sum of Four Digit Number After Splitting Digits
 */

// @lc code=start
class Solution {
public:
    int minimumSum(int num) {
        vector<int> nums;
        while(num>0) nums.push_back(num%10), num/=10;
        sort(nums.begin(),nums.end());
        return (nums[0]*10+nums[2])+(nums[1]*10+nums[3]);
    }
};
// @lc code=end

