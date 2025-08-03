class Solution:
    def findOcurrences(self, text: str, first: str, second: str) -> List[str]:
        word_list = text.split()
        text_len = len(word_list)

        answer = []

        for i in range(2, text_len):
            if word_list[i - 2] == first and word_list[i - 1] == second:
                answer.append(word_list[i])

        return answer
