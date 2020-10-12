class Solution:
    def getKth(self, lo: int, hi: int, k: int) -> int:
        mp = {} #stores computed values 
        mp[1] = 0
        def rec_helper(n):
			 if n in mp:
				return mp[n]
            k = n//2
            if n&1:  #if n is odd 
                k = (n*3)+1
            mp[n] = 1+rec_helper(k)
            return mp[n]
			
        def func(n):
            if n in mp:
                return mp[n]
            return rec_helper(n)
        
        arr = [i for i in range(lo,hi+1)]
        arr.sort(key = lambda x: func(x))
        return arr[k-1]


#https://leetcode.com/problems/sort-integers-by-the-power-value/discuss/891665/Python-Recursion-with-memoizationcache