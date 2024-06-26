/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    int partition(vector<int>& nums, int start, int end){
        int i=start-1;
        for(int j=start;j<end;j++){
            if(nums[j]<nums[end]){
                i++;
                swap(nums[j],nums[i]);
            }
        }
        swap(nums[i+1],nums[end]);
        return i+1;
    }
    void quicksort(vector<int>& nums, int start, int end){
        if(start>end) return;
        int pivot=partition(nums,start,end);
        quicksort(nums,start,pivot-1);
        quicksort(nums,pivot+1,end);
    }
    void sortColors(vector<int>& nums) {
        quicksort(nums,0,nums.size()-1);
    }
};
// @lc code=end

