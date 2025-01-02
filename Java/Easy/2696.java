class Solution {
    public int minLength(String s) {
        // greedy approach using a stack
        Stack<Character> stack = new Stack<>();

        for (char c : s.toCharArray()) {
            if (stack.size() >= 1) {
                if ((stack.peek() == 'C' && c == 'D') || (stack.peek() == 'A' && c == 'B')) {
                    stack.pop();
                } else {
                    stack.push(c);
                }
            } else {
                stack.push(c);
            }
        }

        return stack.size();
    }
}