class Solution {
    public int differenceOfSum(int[] nums) {
        int eSum = 0;
        int dSum = 0;
        for (int i = 0; i < nums.length; i++) {
            eSum += nums[i];
            dSum += digitSum(nums[i]);
        }

        return ((eSum - dSum) >= 0) ? (eSum - dSum) : dSum - eSum;
    }

    public int digitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += (num % 10);
            num /= 10;
        }

        return sum;
    }
}