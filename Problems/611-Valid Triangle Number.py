class Solution:
    def triangleNumber(self, arr: List[int]) -> int:
        arr.sort()
        res = 0
        n = len(arr)
        for i in range(n-1,1,-1):
            l = 0
            r = i - 1
            while l < r:
                if arr[l] + arr[r] > arr[i]:
                    res+= (r-l)
                    r-=1
                else:
                    l+=1
        return res
