class Solution:
    def addSpaces(self, s: str, spaces: List[int]) -> str:
        answer = []

        # for keeping track of answer index
        j=0

        # for keeping track of spaces index
        k=0
        for i in range(len(s)):
            if(k<len(spaces) and i==spaces[k]):
                answer.append(' ')
                k+=1

            answer.append(s[i])
            

        return "".join(answer)
