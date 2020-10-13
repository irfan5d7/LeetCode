class Solution:
    def sortArrayByParityII(self, A: List[int]) -> List[int]:
        od = 1
        ev = 0
        res = [0] * len(A)
        for i in A:
            if i&1:
                res[od] = i
                od+=2
            else:
                res[ev] = i
                ev+=2
        return res