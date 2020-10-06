class Solution:
    def isValid(self, s: str) -> bool:
        opval = {'{':1,'(':2,'[':3}
        cloval = {'}':-1,')':-2,']':-3}
        stack =[]
        for i in s:
            if i in opval:
                stack.append(i)
            elif i in cloval:
                if len(stack)==0:
                    return False
                sum = cloval[i] + opval[stack[-1]]
                if sum != 0:
                    return False
                else:
                    stack.pop()
        if len(stack)==0:
            return True
        return False
                