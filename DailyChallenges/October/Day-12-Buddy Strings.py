class Solution:
    def buddyStrings(self, A: str, B: str) -> bool:
        checker =[
            A=="",
            B=="",
            len(A)!=len(B)
        ]
        if any(checker):
            return False
        if A==B:
            return len(set(A)) < len(A)
        i = 0
        j = len(A)-1
        while i<=j :
            if A[i]==B[i]:
                i+=1
            elif A[j]==B[j]:
                j-=1
            else:
                break
        A = list(A)
        A[i],A[j] = A[j],A[i]
        A="".join(A)
        return A==B
        
        