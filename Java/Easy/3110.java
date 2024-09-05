class Solution {
    public int scoreOfString(String s) {
        int score = 0;
        int temp;
        for (int i = 0; i < s.length() - 1; i++) {
            temp = s.charAt(i) - s.charAt(i + 1);
            if (temp < 0) {
                temp *= -1;
            }

            score += temp;
        }

        return score;
    }
}