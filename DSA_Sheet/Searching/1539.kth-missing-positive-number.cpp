/*
 * @lc app=leetcode id=1539 lang=cpp
 *
 * [1539] Kth Missing Positive Number
 */

// @lc code=start
class Solution {
public:
    bool binarySearch(vector<int> arr, int n){
        int l=0, r=arr.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]==n) return true;
            if(arr[mid]>n) r=mid-1;
            else l=mid+1;
        }
        return false;
    }
    int findKthPositive(vector<int>& arr, int k) {
        int ans;
        int cnt=0;
        int i=1;
        while(cnt!=k){
            if(cnt==k){
                return ans;
            } else {
                if(!binarySearch(arr,i)) {
                    ans=i, cnt++;
                }
            }
            i++;
        }
        return ans;
    }
};
// @lc code=end

