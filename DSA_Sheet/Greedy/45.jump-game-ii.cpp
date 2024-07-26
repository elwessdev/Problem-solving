/*
 * @lc app=leetcode id=45 lang=cpp
 *
 * [45] Jump Game II
 */

// @lc code=start
class Solution {
public:
    int jump(vector<int>& nums) {
        int sz=nums.size()-1;
        if(sz==0) return 0;
        int jump=0, cur=0, far=0;
        for(int i=0;i<sz;i++){
            far=max(far,i+nums[i]);
            if(i==cur){
                jump++;
                cur=far;
                if(cur>=sz) break;
            }
        }
        return jump;
    }
};
// @lc code=end

