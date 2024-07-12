/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
    ListNode* rec(ListNode* l1, ListNode* l2, int carry){
        if (l1 == nullptr && l2 == nullptr && carry == 0) return nullptr;
        int sum = carry;
        if (l1 != nullptr) sum += l1->val, l1 = l1->next;
        if (l2 != nullptr) sum += l2->val, l2 = l2->next;
        ListNode* ans = new ListNode(sum % 10);
        ans->next = rec(l1, l2, sum / 10);
        return ans;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return rec(l1,l2,0);
    }
};
// @lc code=end

