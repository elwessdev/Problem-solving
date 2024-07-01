/*
 * @lc app=leetcode id=1550 lang=cpp
 *
 * [1550] Three Consecutive Odds
 */

// @lc code=start
class Solution {
public:
    bool tCO(vector<int> arr, int n){
        if(arr.size()-n<3) return false;
        if((arr[n] & 1 == 1) && (arr[n + 1] & 1 == 1) && (arr[n + 2] & 1 == 1)) return true;
        return tCO(arr,n+1);
    }
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size()<3) return false;
        return tCO(arr,0);
    }
};
// @lc code=end

