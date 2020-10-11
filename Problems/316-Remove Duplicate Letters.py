class Solution:
    def removeDuplicateLetters(self, s: str) -> str:
        lastOccurIndex = {}
        for i,c in enumerate(s):
            lastOccurIndex[c] = i
        stack = []
        for i,c in enumerate(s):
            if c not in stack:
                while stack and stack[-1] > c and i < lastOccurIndex[stack[-1]]:
                    stack.pop()
                stack.append(c)
        return "".join(stack)