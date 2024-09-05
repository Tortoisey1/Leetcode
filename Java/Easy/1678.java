class Solution {
    public String interpret(String command) {
        String answer = "";
        for (int i = 0; i < command.length(); i++) {
            char c = command.charAt(i);
            if (c == 'G') {
                answer += 'G';
            } else if (c == 'a') {
                answer += "al";
                i += 2;
            } else if (c == ')') {
                answer += 'o';
            }
        }
        return answer;
    }
}