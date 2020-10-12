class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        count = {}
        k = []
        for i in arr1:
            if i in arr2:
                if i in count:
                    count[i]+=1
                else:
                    count[i] = 1
            else:
                k.append(i)
        res = []
        for i in arr2:
            res+= count[i]*[i]
        k.sort()
        for i in k:
            res.append(i)
        return res