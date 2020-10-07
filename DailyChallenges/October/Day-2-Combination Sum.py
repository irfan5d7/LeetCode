class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        res = []
        def dfs(candidates,target,path):
            if target < 0:
                return
            if not target:
                res.append(path[:])
                return
            for i in range(
len(candidates)):
                dfs(candidates[i:],target-candidates[i],path+[candidates[i]])
        dfs(candidates,target,[])
        return res
        