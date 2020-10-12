class Solution:
    def sumSubarrayMins(self, A: List[int]) -> int:
        ple = [ i+1 for i in range(len(A))]
        nle = [ len(A)-i for i in range(len(A))]
        st_p = []
        st_n = []
        for i in range(len(A)):
            while len(st_p) != 0 and A[st_p[-1]] > A[i]: st_p.pop()
            ple[i] = i - st_p[-1] if len(st_p) else i+1
            st_p.append(i)
            while len(st_n) != 0 and A[st_n[-1]] > A[i]:
                x = st_n.pop()
                nle[x] = abs(i - x)
            st_n.append(i)
        mod = 10 ** 9 + 7
        res = 0
        for i in range(len(A)):
            res += ((A[i] * nle[i] * ple[i]) % mod)
        return res%mod