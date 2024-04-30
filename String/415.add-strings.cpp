/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        int i=num1.size()-1,
            j=num2.size()-1,
            carry=0;

        while(i>=0||j>=0||carry>0){
            int digit1= (i>=0)?num1[i]-'0':0,
                digit2= (j>=0)?num2[j]-'0':0,
                sum=digit1+digit2+carry;
            carry=sum/10, sum%=10;
            ans=char(sum+'0')+ans;
            i--,j--;
        }
        return ans;
    }
};
// @lc code=end

