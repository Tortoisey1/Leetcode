class Solution {
    public String truncateSentence(String s, int k) {
        // count number of spaces
        // then use substring function to get the actual string
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == ' ') {
                k--;
                if (k == 0) {
                    return s.substring(0, i);
                }
            }

        }

        return s;
    }
}