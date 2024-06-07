/*
 * @lc app=leetcode id=1122 lang=cpp
 *
 * [1122] Relative Sort Array
 */

// @lc code=start
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> hmp;
        vector<int> temp=arr2;
        vector<int> ans;
        vector<int> rest;
        // using insertion sort 
        for(int i=1;i<temp.size();i++){
            int key=temp[i];
            int prev=i-1;
            while(prev>=0&&key<temp[prev]){
                temp[prev+1]=temp[prev];
                prev--;
            }
            temp[prev+1]=key;
        }
        sort(arr1.begin(),arr1.end());
        // adding to hashmap
        for(const auto &a1:arr1){
            if(hmp.count(a1)) hmp[a1]++;
            else if(binary_search(temp.begin(), temp.end(), a1)) hmp[a1]++;
            else rest.push_back(a1);
        }
        for(const auto &n:arr2){
            if(hmp.count(n)){
                for(int i=0;i<hmp[n];i++){
                    ans.push_back(n);
                }
            }
        }
        for(const auto &num:rest) {
            ans.push_back(num);
        }
        return ans;
    }
};
// @lc code=end

