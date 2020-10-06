class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        res = float('inf')
        val =0
        nums.sort()
        n = len(nums)
        for i in range(n-2):
            print(nums[i])
            j = i+1
            k = n-1
            while j < k:
                s = nums[i]+nums[j]+nums[k]
                if s == target:
                    return target
                else:
                    if res > abs(s-target):
                        res = abs(s-target)
                        val = s
                    if s > target :
                        k-=1
                    else:
                        j+=1
            # print(res)
        return val
                    
                