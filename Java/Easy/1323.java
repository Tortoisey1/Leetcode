class Solution {
    public int maximum69Number(int num) {
        // hold the position of the most left 6 to change to a 9
        int pos = -1;
        int count = 0;
        int temp = num;
        while (temp > 0) {
            if (temp % 10 == 6) {
                pos = count;
            }
            count++;
            temp /= 10;
        }

        num = pos != -1 ? num + (int) Math.pow(10, pos) * 3 : num;
        return num;
    }
}