class Solution {
    public boolean checkIfExist(int[] arr) {
        // store a set of the numbers seen so far
        Set<Integer> set = new HashSet<>();
        for (int i : arr) {
            if (set.contains(i * 2) || (i % 2 == 0 && set.contains(i / 2))) {
                return true;
            }
            set.add(i);
        }

        return false;
    }
}