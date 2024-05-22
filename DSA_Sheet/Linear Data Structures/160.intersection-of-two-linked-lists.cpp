/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // Get length of two linkedlist
        int len1=0;
        ListNode* cur=headA;
        while(cur!=NULL){
            cur=cur->next;
            len1++;
        }
        delete cur;

        int len2=0;
        cur=headB;
        while(cur!=NULL){
            cur=cur->next;
            len2++;
        }
        delete cur;
        // cout<<"lis1 length: "<<len1<<endl;
        // cout<<"lis2 length: "<<len2<<endl;

        // Start from same point
        ListNode* list1=headA;
        ListNode* list2=headB;
        if(len1>len2){
            int dif=len1-len2;
            while(dif--) list1=list1->next;
        } else {
            int dif=len2-len1;
            while(dif--) list2=list2->next;
        }
        // cout<<"lis1 cur elm: "<<list1->val<<endl;
        // cout<<"lis2 cur elm: "<<list2->val<<endl;

        // Get intersection
        while(list1!=NULL&&list2!=NULL){
            if(list1==list2) return list1;
            else list1=list1->next, list2=list2->next;
        }
        delete list1;
        delete list2;
        return NULL;
    }
};
// @lc code=end

