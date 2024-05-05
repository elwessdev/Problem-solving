/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        // bool recFun(int n,int p) {
        //     if(pow(2,p)==n){
        //         return true;
        //     }
        //     if(pow(2,p)>n){
        //         return false;
        //     }
        //     return recFun(n,p+1);
        // }
        bool isPowerOfTwo(int n) {
            // return recFun(n,0);
            if(n==1) return true;
            if(n%2==1) return false;
            if(n<1) return false;
            return isPowerOfTwo(n/2);
        }
    }
};
// @lc code=end

