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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL)
            return NULL;
        ListNode* slow;
        ListNode* fast;
        slow = head;
        fast =head;
        int i = 0;
       while (fast->next!=NULL)
       {
           fast=fast->next;
           if(n<=0)
               slow = slow->next;
           n--;
       }
        if (n>0)
            return head->next;
        slow->next = slow->next->next;
        return head;
    }
};