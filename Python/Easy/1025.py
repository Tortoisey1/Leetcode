class Solution:
    def divisorGame(self, n: int) -> bool:
        # if n is even bob lose, if n is odd alice lose
        return n % 2 == 0
