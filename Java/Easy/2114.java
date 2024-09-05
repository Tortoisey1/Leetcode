class Solution {
    public int mostWordsFound(String[] sentences) {
        int max = 0;
        for (String sentence : sentences) {
            String[]temp = sentence.split(" ");
            max = max> temp.length?max:temp.length;
        }

        return max;
    }
}