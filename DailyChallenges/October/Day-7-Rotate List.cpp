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
    ListNode* rotateRight(ListNode* head, int k) {
        if (k==0 || head == NULL)
            return head;
         int len = 1;
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp->next!=NULL){
            len+=1;
            temp = temp->next;
        }
        k %= len;
        temp->next = head;
        temp = head;
        k=len-k;
        for(int i=0;i<k;i++)
        {
            prev = temp;
            temp=temp->next;
        }
        prev->next = NULL;
        head = temp;
        return head;
    }
};