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
    ListNode* rev_helper(ListNode* hed,int k )
    {
        
        ListNode *pres,*next,*prev;
        pres = hed->next;
        next = pres;
        prev = hed;
        int i = 1;
        while(i<k)
        {
            next = next->next;
            pres->next = prev;
            prev = pres;
            pres = next;
            i++;
        }
        return prev;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (k == 1)
            return head;
        ListNode *newhead = NULL;
        ListNode *temp,*next,*prev;
        temp = head;
      
        while(temp!=NULL)
        {
            int i=0;
            while(i<k && temp!=NULL)
            {
                temp = temp->next;
                i++;
            }
            if(i==k)
            {
              next =   rev_helper(head,k);
                if(newhead == NULL)
                    newhead = next;
                else
                {
                    prev->next = next;
                }
                prev = head;
                head = temp ;
            }
            if(newhead  == NULL)
                return head;
            else
            {
                prev->next = head;
            }
            
        }
        
        return newhead;
    }
};

