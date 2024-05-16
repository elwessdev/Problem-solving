/*
 * @lc app=leetcode id=876 lang=cpp
 *
 * [876] Middle of the Linked List
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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr&&fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;

        // ListNode* cur=head;
        // int cnt=1;
        // while(cur->next!=nullptr){
        //     cur=cur->next;
        //     cnt++;
        // }
        // cout<<cnt<<endl;
        // ListNode* temp=head;
        // int k=0;
        // while(temp->next!=nullptr&&k!=(cnt/2)){
        //    head=temp->next;
        //    temp=head;
        //    k++;
        // }
        // return head;
    }
};
// @lc code=end

