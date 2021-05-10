class Solution:
    def interpret(self, command: str) -> str:
        res = []
        n = len(command)
        i = 0
        while i < n:
            if command[i].isalpha():
                res.append(command[i])
            else:
                if i+1 <  n and command[i+1] == ')':
                    res.append('o')
                    i+=1
            i+=1
        return "".join(res)
        