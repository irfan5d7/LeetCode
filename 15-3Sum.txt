class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res = dict()
        nums = sorted(nums)
        n = len(nums)
        for i in range(n):
            j,k = 0,n-1
            while j<i<k:
                val = (nums[j],nums[i],nums[k])
                s = sum(val)
                if s == 0 and val not in res:
                    res[val] = True
                if s < 0:
                    j+=1
                else:
                    k-=1
        return res.keys()