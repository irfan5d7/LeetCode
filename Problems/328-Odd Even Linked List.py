#https://leetcode.com/problems/odd-even-linked-list/discuss/1294907/Python-Easy-to-understand-O(N)-time-O(1)-space
class Solution:
    def oddEvenList(self, head: ListNode) -> ListNode:
        if head and head.next and head.next.next:
            o = head
            even = e = head.next
            while o and e:
                o.next = e.next
                if e.next:
                    e.next = e.next.next
                    e=e.next
                if o.next:
                    o=o.next
                else:
                    break
            o.next = even
        return head