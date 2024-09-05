class Solution {
    public int chalkReplacer(int[] chalk, int k) {
        // get total sum of the chalk used in one cycle
        // then get the remainder from k to get the last round that can minus away that
        // sum
        long sum = 0;
        for (int i : chalk) {
            sum += i;
        }

        k %= sum;

        // use a counter to keep track of what child im at
        int counter = 0;
        while (k >= chalk[counter]) {// criteria is strictly less
            k -= chalk[counter++];
        }

        return counter;
    }
}