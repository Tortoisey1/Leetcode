class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int answer = 0;

        for (String temp : operations) {
            if (temp.charAt(0) == 'X') {
                if (temp.charAt(1) == '-') {
                    answer--;
                } else {
                    answer++;
                }
            } else {
                if (temp.charAt(0) == '-') {
                    answer--;
                } else {
                    answer++;
                }
            }
        }

        return answer;
    }
}