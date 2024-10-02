/*
 * @lc app=leetcode id=1331 lang=cpp
 *
 * [1331] Rank Transform of an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int> hmp;
        vector<int> sorted;
        sorted = arr;
        sort(sorted.begin(),sorted.end());
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            if(!hmp.count(sorted[i])){
                hmp[sorted[i]]=cnt++;
            }
        }
        vector<int> ans;
        for(auto a:arr) ans.push_back(hmp[a]+1);
        return ans;
    }
};
// @lc code=end

