class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        l = []
        maxx = -1
        comp=0
        for i in s:
            if i not in l:
                l.append(i)
            else:
                comp = len(l)
                k = l.index(i)
                l = l[k+1:]
                comp = max(k+1,comp)
                if maxx<comp:
                    maxx=comp
                l.append(i)
        return max(len(l),maxx)