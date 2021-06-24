class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        a = 0
        temp = l1
        while temp:
            a = (a*10) + temp.val
            temp = temp.next
        temp = l2
        b = 0
        while temp:
            b = (b*10) + temp.val
            temp = temp.next
        a+=b
        ln = 10 ** (len(str(a))-1)
        head = ListNode(0)
        temp = head
        while ln:
            temp.next = ListNode(a//ln)
            temp = temp.next
            a%=ln
            ln//=10
        return head.next