class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        # use a dictionary to act as a frequency map
        freq = {}

        # fill the dictionary
        for string in arr:
            temp = freq.get(string, 0)
            temp += 1
            freq[string] = temp

        # check the kth item in the array by comparing to dictionary
        for string in arr:
            temp = freq.get(string)
            if temp == 1:
                k -= 1
            if k == 0:
                return string

        return ""
