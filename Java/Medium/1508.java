class Solution {
    public int rangeSum(int[] nums, int n, int left, int right) {
        // brute force
        // use a new array to store the sum of subarrays
        // create the new array
        ArrayList<Integer> temp = new ArrayList<>();

        // fill the new array
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                temp.add(sum);
            }
        }

        // sort the array
        Collections.sort(temp);

        int answer = 0;
        int mod = (int) Math.pow(10, 9) + 7;
        // go through the new array to get the answer
        for (int k = left - 1; k < right; k++) {
            answer = (answer + temp.get(k)) % mod;
        }

        return answer;
    }
}