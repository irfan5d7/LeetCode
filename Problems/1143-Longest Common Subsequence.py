class Solution:
    def longestCommonSubsequence(self, str1: str, str2: str) -> int:
        grid=[[0 for i in range(len(str1)+1)]for j in range(len(str2)+1)]
        for i in range(1,len(str2)+1):
            for j in range(1,len(str1)+1):
                if str2[i-1] == str1[j-1]:
                    grid[i][j] = grid[i-1][j-1]+1
                else:
                    grid[i][j] = max(grid[i][j-1],grid[i-1][j])
        return grid[-1][-1]