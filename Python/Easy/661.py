class Solution:
    def imageSmoother(self, img: List[List[int]]) -> List[List[int]]:
        answer = []

        m = len(img)
        n = len(img[0])

        for i in range(m):
            answer.append([])
            for j in range(n):
                # outer 2 loops to get the center
                # then inner loops is to get the surrounding value
                total = 0
                count = 0
                for x in range(-1, 2):
                    for y in range(-1, 2):
                        if self.point_exist(i + x, j + y, m, n):
                            total += img[i + x][j + y]
                            count += 1
                avg = total // count
                answer[i].append(avg)

        return answer

    def point_exist(self, i, j, m, n):
        if i < 0 or i >= m:  # for rows
            return False
        elif j < 0 or j >= n:  # for columns
            return False
        else:
            return True
