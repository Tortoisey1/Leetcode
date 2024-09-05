class Solution {
    public String kthDistinct(String[] arr, int k) {
        // use a hashmap to store the frequency count of the strings
        HashMap<String, Integer> map = new HashMap<>();

        // fill the map with the frequencies
        for (String string : arr) {
            int temp = map.getOrDefault(string, 0);
            temp++;
            map.put(string, temp);
        }

        // find the k distinct string
        for (String string : arr) {
            int temp = map.get(string);
            if (temp == 1) {
                k--;
            }

            if (k == 0) {
                return string;
            }
        }

        return "";
    }
}