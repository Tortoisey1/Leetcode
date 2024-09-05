class Solution {
    public int countSeniors(String[] details) {
        int count = 0;

        for (String string : details) {
            if (string.charAt(11) > '6' || (string.charAt(11) == '6' && string.charAt(12) > '0')) {
                count++;
            }
        }

        return count;
    }
}