/*
 * @lc app=leetcode id=1545 lang=cpp
 *
 * [1545] Find Kth Bit in Nth Binary String
 */

// @lc code=start
class Solution {
public:
    string revInv(string str){
        string res(str.size(),'0');
        for (int i=0;i<str.size();i++){
            res[str.size()-i-1]=(str[i]=='0') ? '1' : '0';
        }
        return res;
    }
    string rec(int n){
        if(n==1) return "0";
        string temp = rec(n-1);
        return temp+'1'+revInv(temp);
    }
    char findKthBit(int n, int k) {
        return rec(n)[k-1];
    }
};
// @lc code=end

