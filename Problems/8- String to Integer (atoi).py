import sys
class Solution:
    def myAtoi(self, str: str) -> int:  
        max = 2147483647
        min = -2 ** 31
        str = str.strip()
        if str == "":
            return 0
        k =[]
        if str[0].isnumeric() or str[0] == "+" or str[0] == "-":
            k.append(str[0])
        else:
            return "0"
        for i in str[1:]:
            if i.isnumeric():
                k.append(i)
            else:
                break
                
        try:
            k = int("".join(k))
        except:
            return "0"
        if k >= max:
            return max
        if k <= min:
            return min
        return k
        
        
            