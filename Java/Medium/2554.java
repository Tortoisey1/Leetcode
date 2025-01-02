class Solution {
    public int maxCount(int[] banned, int n, int maxSum) {
        // use a greedy approach and just add smallest number first that is not banned
        // get the set to remove the duplicates in banned
        Set<Integer> ban = new HashSet<Integer>();
        ban.addAll(Arrays.stream(banned).boxed().toList());

        int sum = 0, count = 0;

        for (int i = 1; i <= n; i++) {
            if (ban.contains(i)) {
                continue;
            }

            if (i + sum <= maxSum) {
                sum += i;
                count++;
            } else {
                break;
            }
        }

        return count;
    }
}