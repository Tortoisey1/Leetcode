class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        answer = set()
        mapping = [
            ".-",
            "-...",
            "-.-.",
            "-..",
            ".",
            "..-.",
            "--.",
            "....",
            "..",
            ".---",
            "-.-",
            ".-..",
            "--",
            "-.",
            "---",
            ".--.",
            "--.-",
            ".-.",
            "...",
            "-",
            "..-",
            "...-",
            ".--",
            "-..-",
            "-.--",
            "--..",
        ]

        for word in words:
            temp = ""
            for c in word:
                temp += mapping[ord(c) - ord("a")]

            answer.add(temp)

        return len(answer)
