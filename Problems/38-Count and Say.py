class Solution:
    def countAndSay(self, n: int) -> str:
        def compute(s):
            res = ""
            count = 1
            s+="/"
            for i in range(len(s)-1):
                if s[i] == s[i+1]:
                    count+=1
                else:
                    res+= str(count)+s[i]
                    count = 1
            return res
        s = "1"
        for i in range(1,n):
            s = compute(s)
        return s