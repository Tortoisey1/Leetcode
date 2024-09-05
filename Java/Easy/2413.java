class Solution {
    public int smallestEvenMultiple(int n) {
        int answer = (n % 2 == 0) ? n : n * 2;
        return answer;
    }
}