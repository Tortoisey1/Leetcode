class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        answer = []

        for word in words:
            temp = word.lower()
            row = self.checkMap(temp[0])
            for c in temp:
                check = self.checkMap(c)
                if row != check:
                    row = -1
                    break
            if row != -1:
                answer.append(word)

        return answer

    def checkMap(self, c):
        mapping = {1: "qwertyuiop", 2: "asdfghjkl", 3: "zxcvbnm"}
        if c in mapping[1]:
            return 1
        elif c in mapping[2]:
            return 2
        else:
            return 3
