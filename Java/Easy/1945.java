class Solution {
    public int getLucky(String s, int k) {
        int sum = 0;
        int num;
        int len = s.length();

        int temp;

        // get the initial digit sums
        for (int i = 0; i < len; i++) {
            num = s.charAt(i) - 'a' + 1;

            // multi-digit char
            if (num >= 10) {
                sum += num / 10;
            }

            sum += num % 10;

        }

        // iterate through k
        while (k > 1) {
            temp = 0;
            while (sum > 0) {
                temp += sum % 10;
                sum /= 10;
            }

            sum = temp;
            k--;
        }

        return sum;
    }
}