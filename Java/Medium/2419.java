class Solution {
    public int longestSubarray(int[] nums) {
        int answer = 1, max = nums[0], count = 1;

        for (int i = 1; i < nums.length; i++) {
            if (nums[i] > max) {
                answer = 1;
                count = 1;
                max = nums[i];
            } else if (nums[i] == max) {
                count++;
                answer = (answer > count) ? answer : count;
            } else {
                answer = (answer > count) ? answer : count;
                count = 0;
            }
        }

        return answer;
    }
}