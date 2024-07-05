/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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
    bool isPa(ListNode** l, ListNode* r){
        if(r==nullptr) return true;
        bool isPalind=isPa(l,r->next);
        if(!isPalind) return false;
        bool curNode=((*l)->val==r->val);
        *l=(*l)->next;
        return curNode;
    }
    bool isPalindrome(ListNode* head) {
        if(head==nullptr||head->next==nullptr) return true;
        return isPa(&head,head);
    }
};
// @lc code=end

