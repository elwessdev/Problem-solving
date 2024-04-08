/*
 * @lc app=leetcode id=1394 lang=cpp
 *
 * [1394] Find Lucky Integer in an Array
 */

// @lc code=start
class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> frequency_arr;
        int n=-1;
        for(int i=0;i<arr.size();i++){
            frequency_arr[arr[i]]++;
        }
        for(auto [key,val]:frequency_arr){
            if(n<val&&val==key){
                n=val;
            }
        }
        if(n==0){
            return -1;
        }
        return n;
    }
};
// @lc code=end

