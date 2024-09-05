class Solution {
    public String reversePrefix(String word, char ch) {
        if (!word.contains(Character.toString(ch))) {
            return word;
        }
        int right = word.indexOf(ch);
        String answer = "";
        for (int i = right; i >= 0; i--) {
            answer += word.charAt(i);
        }
        for (int i = right + 1; i < word.length(); i++) {
            answer += word.charAt(i);
        }

        return answer;
    }
}