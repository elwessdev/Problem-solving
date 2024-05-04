/*
 * @lc app=leetcode id=575 lang=cpp
 *
 * [575] Distribute Candies
 */

// @lc code=start
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> candySet;
        for(auto candy:candyType) candySet.insert(candy);
        return min(candyType.size()/2,candySet.size());
    }
};
// @lc code=end

