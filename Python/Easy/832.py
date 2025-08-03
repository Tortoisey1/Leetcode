class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        # its n by n
        num_rows = len(image)
        for i in range(0, num_rows):
            left = 0
            right = num_rows - 1
            while left <= right:
                temp = self.flip(image[i][left])
                image[i][left] = self.flip(image[i][right])
                image[i][right] = temp

                left += 1
                right -= 1

        return image

    def flip(self, x):
        if x == 1:
            return 0
        return 1
