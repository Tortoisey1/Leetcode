class Solution:
    def canBeEqual(self, target: List[int], arr: List[int]) -> bool:
        # use a dictionary to store the frequency of one array then compare with the other array
        freq = {}

        # create the frequency dictionary
        for i in target:
            temp = freq.get(i, 0)
            temp += 1
            freq[i] = temp

        # compare with the other array
        for i in arr:
            temp = freq.get(i, 0)
            if temp == 0:
                return False
            temp -= 1
            freq[i] = temp

        return True
