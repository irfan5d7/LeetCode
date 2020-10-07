class Solution:
    def findPairs(self, nums: List[int], k: int) -> int:
        s = set()
        nums.sort()
        for i in range(len(nums)-1):
            for j in range(i+1,len(nums)):
                d = (nums[i],nums[j])
                if d not in s:
                    if abs(nums[i]-nums[j]) == k:
                        s.add(d)
                    elif abs(nums[i]-nums[j]) >k:
                        break
                        
        return len(s)