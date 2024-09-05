class Solution:
    def missingRolls(self, rolls: List[int], mean: int, n: int) -> List[int]:
        sumM = sum(rolls)
        total = mean * (len(rolls) + n)
        if total < sumM + n or total > sumM + 6 * n:
            return []

        sumN = total - sumM

        answer = [sumN // n] * n
        remain = sumN % n
        for i in range(remain):
            answer[i] += 1

        return answer
