class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        while(1):
            if nums.count(val)!=0 :
                k = nums.index(val)
                del nums[k]
            else :
                break
        return len(nums)
        