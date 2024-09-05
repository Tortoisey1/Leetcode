class Solution {
    public boolean squareIsWhite(String coordinates) {
        if (coordinates.charAt(0) == 'a' || coordinates.charAt(0) == 'c' || coordinates.charAt(0) == 'e'
                || coordinates.charAt(0) == 'g') {
            if (coordinates.charAt(1) == '2' || coordinates.charAt(1) == '4' || coordinates.charAt(1) == '6'
                    || coordinates.charAt(1) == '8') {
                return true;

            }
            return false;
        } else {
            if (coordinates.charAt(1) == '2' || coordinates.charAt(1) == '4' || coordinates.charAt(1) == '6'
                    || coordinates.charAt(1) == '8') {
                return false;

            }
            return true;
        }
    }
}