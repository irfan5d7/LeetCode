class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        if not len(points): return 0
        points.sort(key = lambda x: x[0])
        res = [points[0]]
        for i in points[1:]:
            if res[-1][-1] >= i[0]:
                res[-1][0] = max(res[-1][0],i[0])
                res[-1][1] = min(res[-1][1],i[1])
            else:
                res.append(i)
        
        return len(res)