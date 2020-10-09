class Solution:
    def removeDuplicates(self, S: str) -> str:
        stc = []
        n = 0
        for i in S:
            if n:
                if stc[-1] == i:
                    stc.pop()
                    n-=1
                else:
                    stc.append(i)
                    n+=1
            else:
                stc.append(i)
                n+=1
        return "".join(stc)