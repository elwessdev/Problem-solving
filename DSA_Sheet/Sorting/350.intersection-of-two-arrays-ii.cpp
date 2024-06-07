/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */

// @lc code=start
class Solution {
public:
    int bs(vector<int> arr, int val){
        int l=0,r=arr.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]==val) return mid;
            if(arr[mid]>val) r=mid-1;
            else l=mid+1;
        }
        return -1;
    }
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        sort(nums2.begin(),nums2.end());
        for(auto &n:nums1){
            int indx=bs(nums2,n);
            if(indx!=-1){
                ans.push_back(n);
                nums2.erase(nums2.begin()+indx);
            }
        }
        for(auto &n:ans) cout<<n<<" ";
        return ans;
    }
};
// @lc code=end

