#https://leetcode.com/problems/split-linked-list-in-parts/discuss/1294869/Python-Solution
class Solution:
    def splitListToParts(self, head: ListNode, k: int) -> List[ListNode]:
        res = [None] * k
        n = 0
        temp = head
        while temp:
            n+=1
            temp=temp.next
        numb = n//k
        ref =  [numb]*k
        numb = n%k
        for i in range(numb):
            ref[i]+=1
        for i in range(k):
            if head:
                res[i] = head
                for j in range(ref[i]-1):
                    head=head.next
                temp = head.next
                head.next = None
                head = temp
        return res