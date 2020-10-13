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
    
    ListNode* merge(ListNode* a,ListNode*b){
        if(!a) return b;
        if(!b) return a;
        ListNode* res = NULL;

        if(a->val <= b->val){
            res=a;
            res->next=merge(a->next,b);
        }
        else{
            res = b;
            res->next =merge(a,b->next);
        }

        return res;
    }
    void partition(ListNode* head,ListNode** a,ListNode** b){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast!=NULL)
        {
            fast = fast->next;
            if(fast){
                slow = slow->next;
                fast = fast->next;
            }
        }
        *a = head;
        *b = slow->next;
        slow->next=NULL;
    }
    void mergeSort(ListNode** head){
        ListNode* h = *head;
        if (h==NULL)
            return ;
        if(h->next==NULL)
            return ;
        ListNode *resHead=NULL;
        ListNode *a=NULL;
        ListNode *b=NULL;
        partition(h,&a,&b);
        mergeSort(&a);
        mergeSort(&b);
        *head = merge(a,b);
        }
    ListNode* sortList(ListNode* head) {
        mergeSort(&head);
        return head;
    }
};