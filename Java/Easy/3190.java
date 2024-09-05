class Solution {
    public int minimumOperations(int[] nums) {
        int count = 0;
        for (int i : nums) {
            if (i % 3 < (3 - (i % 3))) {
                count += i % 3;
            } else {

                count += (3 - (i % 3));
            }
        }

        return count;
    }
}