class Solution:
    def maxArea(self, height: List[int]) -> int:
        left_pointer = 0
        right_pointer = len(height) - 1

        min_height = min(height[left_pointer], height[right_pointer])
        answer = min_height * (right_pointer - left_pointer)

        while left_pointer < right_pointer:
            min_height = min(height[left_pointer], height[right_pointer])
            answer = max(answer, min_height * (right_pointer - left_pointer))
            if height[left_pointer] < height[right_pointer]:
                left_pointer += 1
            else:
                right_pointer -= 1

        return answer
