#Detailed Explanation
#  https://leetcode.com/problems/4sum/discuss/598927/Python-Generalized-Soln-for-ksum-with-explanation
class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        def helper(nums,target,ksum,begin):
            if begin >= len(nums):
                return []
            if ksum == 2:
                res = []
                i = begin
                j = len(nums) - 1
                while i < j:
                    if nums[i] + nums[j] == target:
                        res.append([nums[i], nums[j]])
                        while i < j and nums[i] == nums[i + 1]:
                            i += 1
                        while i < j and nums[j] == nums[j - 1]:
                            j -= 1
                        i += 1
                        j -= 1
                    elif nums[i] + nums[j] > target:
                        j -= 1
                    else:
                        i += 1
                return res
            res = []
            for i in range(begin, len(nums) - ksum + 1):
                if i > begin and nums[i] == nums[i - 1] or nums[i] + nums[-1] * (ksum - 1) < target:
                    continue
                if nums[i] + nums[i + 1] * (ksum - 1) > target:
                    break
                r = helper(nums, target - nums[i], ksum - 1, i + 1)
                for elm in r:
                    elm.insert(0,nums[i])
                for elm in r:
                    res.append(elm)
            return res

        nums.sort()
        return helper(nums, target, 4, 0)
