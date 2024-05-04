/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // vector<int>ans;
        // unordered_map<int,int> hashMap;
        // for(int i=0;i<nums2.size();i++){
        //     hashMap[nums2[i]]=i;
        // }
        // int sz=nums2.size()-1;
        // for(int i=0;i<nums1.size();i++){
        //     int elmIndx=hashMap[nums1[i]];
        //     if(elmIndx!=sz){
        //     bool isFind=false;
        //     for(int j=elmIndx+1;j<nums2.size();j++){
        //         if(nums2[elmIndx]<nums2[j]){
        //             ans.push_back(nums2[j]);
        //             isFind=true;
        //             break;
        //         }
        //     }
        //     if(!isFind) ans.push_back(-1);
        //     } else {
        //         ans.push_back(-1);
        //     }
        // }
        // return ans;
        stack<int>s;
        for(int num:nums2){
        while(!s.empty()&&s.top()<num){
            hashMap[s.top()]=num;
            s.pop();
        }
        s.push(num);
        }
        for(int num:nums1) ans.push_back(hashMap.count(num) ?hashMap[num] :-1);
        return ans;
    }
};
// @lc code=end

