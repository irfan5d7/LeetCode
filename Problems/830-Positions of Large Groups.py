class Solution:
    def largeGroupPositions(self, s: str) -> List[List[int]]:
        res = []
        start = 0
        n = len(s)
        while start < n:
            end = start+1
            while end < n:
                if s[start] == s[end]:
                    end += 1
                else:
                    break
            if (end - start) >=3 :
                res.append([start,end-1])
            start = end
        return res