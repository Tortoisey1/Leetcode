class Solution {
    public boolean canBeEqual(int[] target, int[] arr) {
        // use a hashmap to store frequency of one array then compare with the other
        Map<Integer, Integer> map = new HashMap<>();
        int temp;

        // create the frequency count
        for (int num : target) {
            temp = map.getOrDefault(num, 0);
            temp++;
            map.put(num, temp);
        }

        // compare
        for (int num : arr) {
            temp = map.getOrDefault(num, 0);
            if (temp == 0) {
                return false;
            }
            temp--;
            map.put(num, temp);
        }
        return true;
    }
}