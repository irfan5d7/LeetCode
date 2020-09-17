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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1==NULL && l2==NULL)
            return NULL;
        ListNode* temp;
         ListNode* head=NULL;
        while(l1 != NULL && l2 !=NULL)
        {
            if(l1->val <= l2->val)
            {
                if(head == NULL)
                {
                    head = l1;
                    temp = head;
                    l1=l1->next;
                }
                else
                {
                    temp->next = l1;
                    l1=l1->next;
                    temp = temp->next;
                }
                 
            }
            else
            {
                if(head == NULL)
                {
                    head = l2;
                    temp = head;
                    l2=l2->next;
                }
                else
                {
                     temp->next = l2;
                    l2=l2->next;
                    temp = temp->next;
                }
            }
        }
         while(l1!=NULL)
         {
             if(head == NULL)
                {
                    head = l1;
                    temp = head;
                    l1=l1->next;
                }
                else
                {
                    temp->next = l1;
                    l1=l1->next;
                    temp = temp->next;
                }
         }
        
           while(l2!=NULL)
           {
                if(head == NULL)
                {
                    head = l2;
                    temp = head;
                    l2=l2->next;
                }
                else
                {
                     temp->next = l2;
                    l2=l2->next;
                    temp = temp->next;
                }
           }
             
        temp->next = NULL;
        return head;
    }
};