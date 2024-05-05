/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // if(digits[digits.size()-1]<9) digits[digits.size()-1]+=1;
        // else{
        //   queue<int> s;
        //   for(auto dig:digits) s.push(dig);
        //   long long int num=0;
        //   while(!s.empty()){
        //       num=num*10+s.front();
        //       s.pop();
        //   }
        //   num++;
        //   digits.clear();
        //   while(num!=0){
        //       digits.push_back(num%10), num/=10;
        //   }
        //   reverse(digits.begin(),digits.end());
        // }
        // return digits;

        reverse(digits.begin(),digits.end());
        int carry=1, i=0;
        while(carry){
            if(i<digits.size()){
                if(digits[i]==9) digits[i]=0;
                else digits[i]+=1, carry=0;
            } else {
                digits.push_back(1), carry=0;
            }
            i++;
        }
        reverse(digits.begin(),digits.end());
        return digits;
    }
};
// @lc code=end

