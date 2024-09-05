class Solution {
    public int[][] construct2DArray(int[] original, int m, int n) {
        int size = original.length;
        if (size != m * n) {
            return new int[0][0];
        }

        int[][] answer = new int[m][n];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                answer[i][j] = original[i * n + j];
            }
        }

        return answer;
    }
}