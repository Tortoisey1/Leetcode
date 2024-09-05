class Solution:
    def defangIPaddr(self, address: str) -> str:
        temp = address.split(".")
        answer = "[.]".join(temp)
        return answer
