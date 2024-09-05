class Solution {
    public int findComplement(int num) {
        int answer = 0;
        int binary;
        int multiply = 1;// keep track of the power

        while (num > 0) {
            binary = num % 2;
            if (binary == 0) {
                binary = multiply;
                answer += binary;
            }

            num /= 2;
            multiply *= 2;
        }

        return answer;
    }
}