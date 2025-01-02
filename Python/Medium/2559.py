class Solution:
    def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
        # use a prefix sum method
        sumArr = list()

        # use a set to store the vowels
        vowels = {"a", "e", "i", "o", "u"}

        for word in words:
            if (word[0] in vowels) and (word[-1] in vowels):
                if len(sumArr) == 0:
                    sumArr.append(1)
                else:
                    sumArr.append(sumArr[-1] + 1)
            else:
                if len(sumArr) == 0:
                    sumArr.append(0)
                else:
                    sumArr.append(sumArr[-1])

        answer = list()

        for query in queries:
            if query[0] == 0:
                answer.append(sumArr[query[1]])
            else:
                answer.append(sumArr[query[1]] - sumArr[query[0] - 1])

        return answer
