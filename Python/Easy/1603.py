class ParkingSystem:

    def __init__(self, big: int, medium: int, small: int):
        self.space = {"big": big, "medium": medium, "small": small}

    def addCar(self, carType: int) -> bool:
        # big is 1, medium is 2, small is 3
        if carType == 1:
            self.space["big"] -= 1
            return self.space["big"] >= 0
        elif carType == 2:
            self.space["medium"] -= 1
            return self.space["medium"] >= 0
        else:
            self.space["small"] -= 1
            return self.space["small"] >= 0


# Your ParkingSystem object will be instantiated and called as such:
# obj = ParkingSystem(big, medium, small)
# param_1 = obj.addCar(carType)
