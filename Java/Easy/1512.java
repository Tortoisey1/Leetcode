class Solution {
    public int numIdenticalPairs(int[] nums) {
        Map<Integer, Integer> map = new HashMap<>();
        int answer = 0;
        int temp;

        for (int i : nums) {
            temp = map.getOrDefault(i, 0);
            answer += temp;
            temp++;
            map.put(i, temp);
        }

        return answer;
    }
}