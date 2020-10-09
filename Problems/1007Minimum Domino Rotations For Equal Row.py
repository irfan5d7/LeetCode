class Solution:
    def minDominoRotations(self, A: List[int], B: List[int]) -> int:
        zp = zip(A,B)
        for i in set([A[0],B[0]]):
            if all(i in z for z in zp):
                return len(A) - max(A.count(i),B.count(i))
        return -1
    