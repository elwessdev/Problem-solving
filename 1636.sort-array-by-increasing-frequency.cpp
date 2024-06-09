/*
 * @lc app=leetcode id=1636 lang=cpp
 *
 * [1636] Sort Array by Increasing Frequency
 */

// @lc code=start
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> hmp;
        for(const auto& n:nums) hmp[n]++;

        map<int,vector<int>> hmp2;
        for(const auto& n:hmp) hmp2[n.second].push_back(n.first);

        nums.clear();

        for(auto& freq:hmp2){
            sort(freq.second.begin(),freq.second.end(),[](int a, int b){
                return a>b;
            });
            for(auto& num:freq.second){
                for(int i=0;i<freq.first;i++) nums.push_back(num);
            }
        }
        return nums;
    }
};
// @lc code=end

