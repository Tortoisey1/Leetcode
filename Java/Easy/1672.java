class Solution {
    public int maximumWealth(int[][] accounts) {
        int max = 0;
        int sum;
        for (int[] account : accounts) {
            sum = 0;
            for (int i : account) {
                sum += i;
            }
            max = Math.max(max, sum);
        }
        return max;
    }
}