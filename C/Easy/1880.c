bool isSumEqual(char *firstWord, char *secondWord, char *targetWord)
{
    int first = 0;
    int second = 0;
    int target = 0;

    int lenF = strlen(firstWord);
    int lenS = strlen(secondWord);
    int lenT = strlen(targetWord);
    // get first
    for (int i = 0; i < lenF; i++)
    {
        first *= 10;
        first += firstWord[i] - 'a';
    }

    // get second
    for (int i = 0; i < lenS; i++)
    {
        second *= 10;
        second += secondWord[i] - 'a';
    }

    // get target
    for (int i = 0; i < lenT; i++)
    {
        target *= 10;
        target += targetWord[i] - 'a';
    }

    return ((first + second) == target);
}