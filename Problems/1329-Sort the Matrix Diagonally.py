class Solution:
    def diagonalSort(self, mat: List[List[int]]) -> List[List[int]]:
        n = len(mat)
        m = len(mat[0])
        i = 0
        j = m -1
        while j >= 0:
            arr = []
            a = 0
            b = j
            while b < m and a < n:
                arr.append(mat[a][b])
                a += 1
                b += 1
            arr.sort()
            a = 0
            b = j
            while b < m and a < n:
                mat[a][b] = arr[a]
                a += 1
                b += 1
            j-=1
        i = 1
        j = 0
        while i < n:
            a = i
            b = 0
            arr = []
            while a < n and b < m:
                arr.append(mat[a][b])
                a += 1
                b += 1
            arr.sort()
            a = i
            b = 0
            while a < n and b < m:
                mat[a][b] = arr[b]
                a += 1
                b += 1
            i += 1
        return mat