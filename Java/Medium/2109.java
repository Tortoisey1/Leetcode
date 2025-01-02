class Solution {
    public String addSpaces(String s, int[] spaces) {
        StringBuilder answer = new StringBuilder();

        // index of the spaces
        int k = 0;
        for (int i = 0; i < s.length(); i++) {
            if (k < spaces.length && i == spaces[k]) {
                answer.append(" ");
                k++;
            }
            answer.append(s.charAt(i));
        }

        return answer.toString();
    }
}