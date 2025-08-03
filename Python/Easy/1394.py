class Solution:
    def findLucky(self, arr: List[int]) -> int:
        # use a frequency array
        # time taken wld be linear time
        freq = {}
        for i in arr:
            freq[i] = freq.get(i, 0) + 1

        answer = -1
        # check the frequency dict
        for item in freq.keys():
            if freq[item] == item:
                if item > answer:
                    answer = item

        return answer
