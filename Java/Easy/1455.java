class Solution {
    public int isPrefixOfWord(String sentence, String searchWord) {
        // split the string then check if it occurs
        String[] words = sentence.split(" ");

        for (int i = 0; i < words.length; i++) {
            if (words[i].startsWith(searchWord)) {
                // 1 indexed
                return i + 1;
            }
        }

        return -1;
    }
}