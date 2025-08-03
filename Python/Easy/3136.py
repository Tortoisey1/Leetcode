class Solution:
    def isValid(self, word: str) -> bool:
        vowelCount = 0
        consonantCount = 0
        if not word.isalnum() or len(word) < 3:
            return False
        for c in word:
            if not c.isdigit():
                if (
                    c.lower() == "a"
                    or c.lower() == "e"
                    or c.lower() == "i"
                    or c.lower() == "o"
                    or c.lower() == "u"
                ):
                    vowelCount += 1
                else:
                    consonantCount += 1
        return (vowelCount > 0) and (consonantCount > 0)
