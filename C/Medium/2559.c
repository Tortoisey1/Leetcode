/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* vowelStrings(char** words, int wordsSize, int** queries, int queriesSize,
                  int* queriesColSize, int* returnSize) {
    // store a running sum of the vowel words in an int array
    int* sumArr = malloc(wordsSize * sizeof(int));

    char* word;
    int counter;
    // fill the sumArr
    for (int i = 0; i < wordsSize; i++) {
        word = words[i];

        // check if start with vowel
        if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' ||
            word[0] == 'o' || word[0] == 'u') {
            counter = 1;

            // go to the last letter
            while (word[counter] != '\0') {
                counter++;
            }

            counter--;
            if (word[counter] == 'a' || word[counter] == 'e' ||
                word[counter] == 'i' || word[counter] == 'o' ||
                word[counter] == 'u') {
                sumArr[i] = (i == 0) ? 1 : sumArr[i - 1] + 1;
            } else {
                sumArr[i] = (i == 0) ? 0 : sumArr[i - 1];
            }
        } else {
            sumArr[i] = (i == 0) ? 0 : sumArr[i - 1];
        }
    }

    int* answer = malloc(queriesSize * sizeof(int));
    *returnSize = queriesSize;

    // fill the answer array
    for (int j = 0; j < queriesSize; j++) {
        answer[j] = (queries[j][0] - 1 < 0)
                        ? sumArr[queries[j][1]]
                        : sumArr[queries[j][1]] - sumArr[queries[j][0] - 1];
    }

    return answer;
}