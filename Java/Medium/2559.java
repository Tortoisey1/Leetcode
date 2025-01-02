class Solution {
    public int[] vowelStrings(String[] words, int[][] queries) {
        // hold the prefix sum
        int[] sumArr = new int[words.length];
        for (int i = 0; i < words.length; i++) {
            if (words[i].charAt(0) == 'a' || words[i].charAt(0) == 'e' || words[i].charAt(0) == 'i'
                    || words[i].charAt(0) == 'o' || words[i].charAt(0) == 'u') {
                if (words[i].charAt(words[i].length() - 1) == 'a'
                        || words[i].charAt(words[i].length() - 1) == 'e'
                        || words[i].charAt(words[i].length() - 1) == 'i'
                        || words[i].charAt(words[i].length() - 1) == 'o'
                        || words[i].charAt(words[i].length() - 1) == 'u') {
                    sumArr[i] = (i == 0) ? 1 : sumArr[i - 1] + 1;
                } else {
                    sumArr[i] = (i == 0) ? 0 : sumArr[i - 1];
                }
            } else {
                sumArr[i] = (i == 0) ? 0 : sumArr[i - 1];
            }
        }

        int[] answer = new int[queries.length];

        for (int j = 0; j < queries.length; j++) {
            answer[j] = (queries[j][0] == 0) ? sumArr[queries[j][1]]
                    : sumArr[queries[j][1]] - sumArr[queries[j][0] - 1];
        }

        return answer;
    }
}