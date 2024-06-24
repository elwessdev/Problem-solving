/*
 * @lc app=leetcode id=1343 lang=cpp
 *
 * [1343] Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold
 */

// @lc code=start
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ans=0;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        bool PTwo = (k & (k - 1)) == 0;
        if ((PTwo ? (sum>>__builtin_ctz(k)) : (sum/k))>=threshold) ans++;
        int p1=0, p2=k;
        while(p2<arr.size()){
            sum+=arr[p2]-arr[p1];
            p1++;
            p2++;
            if ((PTwo ? (sum>>__builtin_ctz(k)) : (sum/k))>=threshold) ans++;
        }
        return ans;
    }
};
// @lc code=end

