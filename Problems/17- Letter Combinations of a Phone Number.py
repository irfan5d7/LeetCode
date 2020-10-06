from collections import deque
class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        if digits == "":
            return []
        board = ["", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"]
        res = []
        n = len(digits)
        q = deque()
        q.append("")
        while len(q) != 0:
            s = q.pop()
            if len(s) == n:
                res.append(s)
            else:
                for l in board[int(digits[len(s)])]:
                    q.append(s + l)
        return res
            
        