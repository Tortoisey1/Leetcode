class Solution {
    public int findPermutationDifference(String s, String t) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            int indexT = t.indexOf(c);
            sum += Math.abs(i - indexT);
        }
        return sum;
    }
}