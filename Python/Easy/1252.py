class Solution:
    def oddCells(self, m: int, n: int, indices: List[List[int]]) -> int:
        # O(n + m) extra space
        # just need keep track of where the operation occur
        # O(n + m + indices.length) time
        # indices length to run through the operation
        # n and m is to check if its odd
        # m is row, n is column
        # then count number of odd and even from m and n each
        # then odd can pair with even from row m and n vice versa
        # if pair exist that means the total is odd then just have to add the number of rows  which is the odd/even value of the comparison row or 
        # this answer is the leetcode follow up solution

        arr_n = [0 for i in range(0, n)]
        arr_m = [0 for i in range(0, m)]

        answer = 0
        for index in indices:
            arr_m[index[0]] += 1
            arr_n[index[1]] += 1

        even_m = 0
        odd_m = 0

        for m in arr_m:
            if m % 2 == 0:
                even_m += 1
            else:
                odd_m += 1

        for n in arr_n:
            if n % 2 == 0:
                answer += odd_m
            else:
                answer += even_m

        return answer
