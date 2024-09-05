class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        # count number of 5 and 10 dollar bill
        # minimise the 10 dollar bill first cause need more 5 dollar bill for everything

        count10 = 0
        count5 = 0

        for bill in bills:
            if bill == 10:
                count10 += 1
                count5 -= 1
                if count5 < 0:
                    return False
            elif bill == 20:
                if count10 > 0:
                    count10 -= 1
                    count5 -= 1
                else:
                    count5 -= 3
                if count5 < 0:
                    return False
            else:
                count5 += 1

        return True
