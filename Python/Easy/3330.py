class Solution:
    def possibleStringCount(
        self, word: str
    ) -> (
        int
    ):  # just count the number of repeated characters if it is multiple in a row , no need to bother permutations since it can only happen once
        holder = word[0]
        count = 1  # 1 is for the original string
        for c in word[1:]:
            if c == holder:
                count += 1
            else:
                holder = c

        return count
