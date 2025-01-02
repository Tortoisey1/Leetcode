class Solution:
    def longestDiverseString(self, a: int, b: int, c: int) -> str:
        answer = []
        curra = currb = currc = 0
        total = a + b + c

        for i in range(total):
            if (a >= b and a >= c and curra < 2) or (
                a > 0 and ((currb >= 2 and a >= c) or (currc >= 2 and a >= b))
            ):
                a -= 1
                answer.append("a")
                currb = currc = 0
                curra += 1
            elif (b >= c and b >= a and currb < 2) or (
                b > 0 and ((curra >= 2 and b >= c) or (currc >= 2 and b >= a))
            ):
                b -= 1
                answer.append("b")
                currc = curra = 0
                currb += 1

            elif (c >= b and c >= a and currc < 2) or (
                c > 0 and ((currb >= 2 and c >= a) or (curra >= 2 and c >= b))
            ):
                c -= 1
                answer.append("c")
                curra = currb = 0
                currc += 1

        return "".join(answer)
