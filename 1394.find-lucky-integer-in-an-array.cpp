/*
 * @lc app=leetcode id=1394 lang=cpp
 *
 * [1394] Find Lucky Integer in an Array
 */

// @lc code=start
class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=0;
        map<int, int> frequency_arr;
        for(int i=0;i<arr.size();i++){
            frequency_arr[arr[i]]++;
        }
        for(auto it = frequency_arr.begin(); it != frequency_arr.end(); it++) {
            if(n<it->first&&it->first==it->second){
                n=it->first;
            }
        }
        if(n==0){
            return -1;
        }
        return n;
    }
};
// @lc code=end

