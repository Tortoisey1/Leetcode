class Solution {
    public int minAddToMakeValid(String s) {
        // just need count brackets no need care about the permutation
        // if encounter close bracket and have open bracket can minus
        // but if run out of open bracket means need add open bracket and add to answer
        // directly
        // if got leftover open bracket add to the answer
        int countOpen = 0;
        int answer = 0;

        for (char c : s.toCharArray()) {
            if (c == '(') {
                countOpen++;
            } else {
                if (countOpen > 0) {
                    countOpen--;
                } else {
                    answer++;
                }
            }
        }

        return countOpen + answer;
    }
}