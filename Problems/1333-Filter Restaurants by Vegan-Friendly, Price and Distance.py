class Solution:
    def filterRestaurants(self, restaurants: List[List[int]], veganFriendly: int, maxPrice: int, maxDistance: int) -> List[int]:
        def filte(rest):
            return all([
                rest[2] if veganFriendly else 1 ,
                maxPrice >= rest[3],
                maxDistance >= rest[4]
            ])
        
        res = [i for i in restaurants if filte(i)]
        res.sort(key = lambda x: (-x[1],-x[0]))
        res = [i[0] for i in res] 
        return res