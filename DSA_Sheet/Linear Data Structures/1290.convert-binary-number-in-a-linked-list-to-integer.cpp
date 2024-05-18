/*
 * @lc app=leetcode id=1290 lang=cpp
 *
 * [1290] Convert Binary Number in a Linked List to Integer
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* cur=head;
        vector<int> nums;
        while(cur!=nullptr) nums.push_back(cur->val), cur=cur->next;
        int i=nums.size()-1;
        int ans=0;
        for(auto n:nums) ans+=n*pow(2,i), i--;
        return ans;
    }
};
// @lc code=end

