class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        # use a set to get the uniques in jewels
        # then compare with stones
        hold = set()
        answer = 0

        # fill the set
        for i in jewels:
            hold.add(i)

        # compare the set with the other string
        for j in stones:
            if j in hold:
                answer += 1

        return answer
