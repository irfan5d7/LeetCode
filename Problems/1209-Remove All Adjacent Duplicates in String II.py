class Solution:
    def removeDuplicates(self, s: str, k: int) -> str:        
        stck = []
        n = 0
        def remov():
            for i in range(k):
                stck.pop()

        for i in s:
            if n:
                if stck[-1][0] == i:
                    stck.append([i,stck[-1][1]+1])
                    n += 1
                    if stck[-1][1] == k:
                        remov()
                        n -= k
                else:
                    stck.append([i,1])
                    n += 1
            else:
                stck.append([i,1])
                count = 1
                n += 1
        return "".join([i[0] for i in stck])