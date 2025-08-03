class Solution:
    def distributeCandies(self, candyType: List[int]) -> int:
        # length of candy type is always even
        # max number of diff type of candy
        # just need get a freq count
        max = len(candyType) // 2
        freq = set()

        for i in range(0, len(candyType)):
            freq.add(candyType[i])

        return int(min(len(freq), max))
