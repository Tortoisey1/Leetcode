class Solution {
    public boolean isSameAfterReversals(int num) {
        // just check if ending hass a 0
        if (num == 0) {
            return true;
        }

        return !(num % 10 == 0);
    }
}