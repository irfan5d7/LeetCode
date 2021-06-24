#https://leetcode.com/problems/linked-list-components/discuss/1294811/Python-Simple-Solution
class Solution:
    def numComponents(self, head: ListNode, nums: List[int]) -> int:
        d = set(nums)
        count = 0
        c = 0
        temp = head
        while temp:
            if temp.val in d:
                c=1
            else:
                count+=c
                c=0
            temp= temp.next
        return count+c
                