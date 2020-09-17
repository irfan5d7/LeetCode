class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1:
            return s
        n = len(s)
        next  = numRows*2 - 2
        res = []
        for i in range(numRows):
            for j in range(i,n,next):
                res.append(s[j])
                if i != numRows - 1 and i != 0 and j + next - 2 * i < n:
                    res.append(s[j + next - 2 * i])
        newstr = ''.join(res)
        return newstr
        