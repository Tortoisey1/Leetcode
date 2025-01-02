class Solution {
    public long minimumSteps(String s) {
        // is just bubble sort
        // count the number of black before that represents number of swaps

        long answer = 0;
        long black = 0;

        for (char c : s.toCharArray()) {
            if (c == '1') {// black
                black++;
            } else {// white
                answer += black;
            }
        }

        return answer;

    }
}