char nextGreatestLetter(char *letters, int lettersSize, char target)
{
    if (letters[lettersSize - 1] <= target)
    {
        return letters[0];
    }

    for (int i = 0; i < lettersSize; i++)
    {
        if (letters[i] > target)
        {
            return letters[i];
        }
    }
    return 'a';
}