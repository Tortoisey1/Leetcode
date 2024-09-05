class Solution:
    def countSeniors(self, details: List[str]) -> int:
        count = 0
        for temp in details:
            if (temp[11] > "6") or (temp[11] == "6" and temp[12] > "0"):
                count += 1

        return count
