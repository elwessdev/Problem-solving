/*
 * @lc app=leetcode id=718 lang=cpp
 *
 * [718] Maximum Length of Repeated Subarray
 */

// @lc code=start
class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int maxL = 0;
        int m = nums1.size();
        int n = nums2.size();
        
        // First approach
        // vector<vector<int>> MT(m, vector<int>(n, 0));
        // for(int i = 0; i < m; i++){
        //     for(int j = 0; j < n; j++){
        //         if(nums1[i] == nums2[j]){
        //             MT[i][j] = 1;
        //         }
        //     }
        // }
        // // Check diagonal 
        // for (int i = 0; i < m; i++) {
        //     for (int j = 0; j < n; j++) {
        //         if (MT[i][j] == 1) {
        //             int i1=i, j1=j;
        //             int cnt=0;
        //             while(i1<m&&j1<n&&MT[i1][j1]==1) cnt++,j1++,i1++;
        //             maxL = max(maxL, cnt);
        //         }
        //     }
        // }

        // Second approach
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (nums1[i] == nums2[j]) {
                    int len = 0;
                    while (i + len < m && j + len < n && nums1[i + len] == nums2[j + len]) {
                        len++;
                    }
                    maxL = max(maxL, len);
                }
            }
        }

        // Return the maximum
        return maxL;
    }
};
// @lc code=end

