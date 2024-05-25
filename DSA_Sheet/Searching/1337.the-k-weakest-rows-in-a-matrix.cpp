/*
 * @lc app=leetcode id=1337 lang=cpp
 *
 * [1337] The K Weakest Rows in a Matrix
 */

// @lc code=start
class Solution {
public:
    int binarySearch(vector<int> vec){
        int l=0, r=vec.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(vec[mid]==1) l=mid+1;
            else r=mid-1;
        }
        return l;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        // First Approach
        // multiset<pair<int,int>> nums;
        // for(int i=0;i<mat.size();i++){
        //     int cnt=0;
        //     for(int j=0;j<mat[i].size();j++){
        //         if(mat[i][j]==1) cnt++;
        //     }
        //     nums.insert({cnt,i});
        // }
        // vector<int> ans;
        // while(!nums.empty()&&k--){
        //     ans.push_back(nums.begin()->second);
        //     nums.erase(nums.begin());
        // }
        // return ans;
        
        // Second Approach with binary search
        vector<pair<int,int>> nums;
        for(int i=0;i<mat.size();i++){
            //-> calculate the sum of 1 with (n) time
            // int cnt=accumulate(mat[i].begin(),mat[i].end(),0);
            //-> calculate the sum of 1 with (log n) time
            int cnt=binarySearch(mat[i]);
            // push to vector
            nums.push_back({cnt,i});
        }
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=0;i<k;i++) ans.push_back(nums[i].second);
        return ans;
    }
};
// @lc code=end

