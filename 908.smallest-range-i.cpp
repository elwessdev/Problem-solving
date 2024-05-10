/*
 * @lc app=leetcode id=908 lang=cpp
 *
 * [908] Smallest Range I
 */

// @lc code=start
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int max_elm = *max_element(nums.begin(),nums.end());
        int min_elm = *min_element(nums.begin(),nums.end());
        if(min_elm+k>=max_elm-k) return 0;
        return (max_elm-k)-(min_elm+k);
    }
};
// @lc code=end

