class Solution:
    def isValidSerialization(self, preorder: str) -> bool:
        place = 1
        for i in preorder.split(","):
            if not place: return False
            if i == "#":
                place-=1
            else:
                place+=1
        return not place