class Solution {
    public int balancedStringSplit(String s) {
        // greedy approach
        int count = 0;
        int holder = 0; // count number of right the moment it is 0 add to count
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'R') {
                holder++;
            } else {
                holder--;
            }
            if (holder == 0) {
                count++;
            }
        }
        return count;
    }
}