char *restoreString(char *s, int *indices, int indicesSize)
{
    char *answer = malloc((1 + indicesSize) * sizeof(char));
    answer[indicesSize] = '\0';

    int temp;
    for (int i = 0; i < indicesSize; i++)
    {
        temp = indices[i];
        answer[temp] = s[i];
    }
    return answer;
}