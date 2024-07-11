/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution {
public:
    void bt(vector<int>& nums, vector<vector<int>>& ans, vector<int>& perm, vector<bool>& visited, int sz)  {
        // Check if get the Dead end
        if(perm.size()==sz){
            ans.push_back(perm);
            return;
        }
        // Loop for the elements
        for(int i=0;i<sz;i++){
            // DFS: avoid the element if visited
            if(visited[i]) continue;
            // Else saved visited and push in perm array
            visited[i]=1;
            perm.push_back(nums[i]);
            // recursive for next node
            bt(nums,ans,perm,visited,sz);
            // After base case return to pop and remove all visited elements
            visited[i]=0;
            perm.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int sz=nums.size();
        vector<int> perm;
        vector<vector<int>> ans;
        vector<bool> visited(sz,0);
        bt(nums,ans,perm,visited,sz);
        return ans;
    }
};
// @lc code=end

