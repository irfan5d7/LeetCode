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
    ListNode* merger(ListNode* leftHead,ListNode* rightHead){
        if(!leftHead) return rightHead;
        if(!rightHead) return leftHead;
        ListNode *res = NULL;
        if (leftHead->val <= rightHead->val){
            res = leftHead;
            res->next = merger(leftHead->next,rightHead);
        }
        else{
            res = rightHead;
            res->next = merger(leftHead,rightHead->next);
        }
        return res;
    }
    ListNode* midPoint(ListNode* node){
        ListNode* slow = node;
        ListNode* fast = node->next;
        while (fast){
            fast=fast->next;
            if(fast){
                slow = slow->next;
                fast = fast->next;
            }
        }
        ListNode *mid = slow->next;
        slow->next = NULL;
        return mid;
    }
    ListNode* mergeSort(ListNode* node){
        if(!node || !node->next) return node;
        ListNode *mid = midPoint(node);
        ListNode *lefthead = mergeSort(node);
        ListNode *righthead = mergeSort(mid);
        return merger(lefthead,righthead);
    }
    ListNode* sortList(ListNode* head) {
        return mergeSort(head);
    }
};