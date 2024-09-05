class Solution {
    public int[] missingRolls(int[] rolls, int mean, int n) {
        // get the sum of m
        int sumM = 0;
        for (int i = 0; i < rolls.length; i++) {
            sumM += rolls[i];
        }

        int total = mean * (rolls.length + n);

        // check boundaries
        if (total < sumM + n || total > sumM + 6 * n) {
            return new int[0];
        }
        int[] answer = new int[n];

        int sumN = total - sumM;

        // distribute over the average
        for (int j = 0; j < n; j++) {
            answer[j] = sumN / n;
        }

        int remain = sumN % n;
        // distribute the remainder
        for (int k = 0; k < remain; k++) {
            answer[k]++;
        }

        return answer;
    }
}