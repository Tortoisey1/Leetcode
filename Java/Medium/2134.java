class Solution {
    public int max(int first, int second) {
        if (first >= second) {
            return first;
        }
        return second;
    }

    public int minSwaps(int[] nums) {
        // sliding window technique
        // use modulo to wrap for the circular
        // count total ones first
        int totalOnes = 0;
        for (int i : nums) {
            if (i == 1) {
                totalOnes++;
            }
        }

        // edge case:
        // no 1s or all 1s
        if (totalOnes == nums.length || totalOnes == 0) {
            return 0;
        }

        int maxOnes;
        int currentOnes = 0;
        // initial window
        for (int i = 0; i < totalOnes; i++) {
            if (nums[i] == 1) {
                currentOnes++;
            }
        }

        maxOnes = currentOnes;

        // slide the window
        for (int i = 1; i < nums.length; i++) {
            // left edge
            if (nums[i - 1] == 1) {
                currentOnes--;
            }

            // right edge
            if (nums[(i + totalOnes - 1) % nums.length] == 1) {
                currentOnes++;
            }

            maxOnes = max(maxOnes, currentOnes);
        }

        return totalOnes - maxOnes;
    }
}