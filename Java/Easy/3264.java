class Solution {
    public int[] getFinalState(int[] nums, int k, int multiplier) {
        int min;
        for (int i = 0; i < k; i++) {
            min = 0;
            for (int j = 1; j < nums.length; j++) {
                min = (nums[j] < nums[min]) ? j : min;
            }
            nums[min] *= multiplier;
        }

        return nums;
    }
}