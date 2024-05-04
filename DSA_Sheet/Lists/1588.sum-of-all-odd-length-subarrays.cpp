/*
 * @lc app=leetcode id=1588 lang=cpp
 *
 * [1588] Sum of All Odd Length Subarrays
 */

// @lc code=start
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int k=1;
        int sum=0;
        while(k<=arr.size()){
            for(int i=0;i<arr.size();i++){
                if(i+k<=arr.size()){
                    for(int j=i;j<k+i;j++){
                        sum+=arr[j];
                    }
                }
            }
            k+=2;
        }
        return sum;
    }
};
// @lc code=end

