class Solution:
    def countSubstrings(self, s: str) -> int:
        n = len(s)
        dp = [[0 for i in range(n)] for j in range(n)]
        count = 0
        for i in range(n):
            dp[i][i] = 1
            count+=1
        for i in range(n-1):
            if s[i] == s[i+1]:
                dp[i][i+1] = 1
                count+=1
        for l in range(2,n+1):
            for i in range(n-l):
                j = i+l
                if s[i] == s[j] and dp[i+1][j-1]:
                    dp[i][j] = 1
                    count+=1
        return count
        