class ParkingSystem:
    car = [0,0,0]
    def __init__(self, big: int, medium: int, small: int):
        self.car[0] = big
        self.car[1] = medium
        self.car[2] = small

    def addCar(self, carType: int) -> bool:
        if self.car[carType-1]:
            self.car[carType-1]-=1
            return True
        else:
            return False


# Your ParkingSystem object will be instantiated and called as such:
# obj = ParkingSystem(big, medium, small)
# param_1 = obj.addCar(carType)