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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if (n == 0)
            return NULL;
        ListNode *head=NULL;
        ListNode *min;
        ListNode *temp = head;
        int mn,mx;
        mn = -1;
        int flag = 1;
        while(flag)
        {
            flag = 0;  
            mx = 999999;
            for(int i=0;i<n;i++)
            {
              
                if(lists[i] != NULL )
                {
                    flag = 1;
                    if( lists[i]->val < mx)
                    {
                        mx = lists[i]->val;
                        mn = i;
                    }
                }
            }    
            if(!flag)
                break;
            if(head == NULL )
            {
                head = lists[mn];
                temp=head;
                lists[mn]=lists[mn]->next;
                temp->next=NULL;
            }
            else 
            {
                temp->next = lists[mn];
                temp=temp->next;
                lists[mn]=lists[mn]->next;
                temp->next=NULL;
            }
            
        }
        return head;
        
    }
};