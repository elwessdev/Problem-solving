/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        unsigned int sx=x, rev_x=0;
        while(sx!=0){
        int n=sx%10;
        rev_x=rev_x*10+n;
        sx/=10;
        }
        return rev_x==x;
        // string str="";
        // int newX=x;
        // while(newX!=0){
        //     char charDigit = abs(newX % 10) + '0';
        //     str=charDigit+str;
        //     newX/=10;
        // }
        // if(x<0) str+="-";
        // for(int i=0;i<str.size()/2;i++){
        //     if(str[i]!=str[str.size()-i-1]) return false;
        // }
        // return true;
    }
};
// @lc code=end

