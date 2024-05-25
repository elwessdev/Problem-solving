/*
 * @lc app=leetcode id=441 lang=cpp
 *
 * [441] Arranging Coins
 */

// @lc code=start
class Solution {
public:
    int arrangeCoins(int n) {
        // int cnt=1, res=n-cnt;
        // while(res>cnt) cnt++, res-=cnt;
        // return cnt;
        int l=1, r=n;
        int ans;
        while(l<=r){
            long long int mid=l+(r-l)/2;
            long long int e=mid*(mid+1)/2;
            if(e>n) r=mid-1;
            else l=mid+1;
        }
        return r;
    }
};
// @lc code=end

