class Solution {
    public int numberOfEmployeesWhoMetTarget(int[] hours, int target) {
        int answer = 0;
        for (int i : hours) {
            if (i >= target) {
                answer++;
            }
        }

        return answer;
    }
}