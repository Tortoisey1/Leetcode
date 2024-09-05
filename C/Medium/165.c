int compareVersion(char *version1, char *version2)
{
    int i = 0;
    int j = 0;

    int len1 = strlen(version1);
    int len2 = strlen(version2);

    int num1;
    int num2;

    while (i < len1 || j < len2)
    {
        // start of the dot/string
        num1 = 0;
        num2 = 0;

        // go through the first string
        while (i < len1 && version1[i] != '.')
        {
            num1 *= 10;
            num1 += (version1[i] - '0');
            i++;
        }

        // go through the second string
        while (j < len2 && version2[j] != '.')
        {
            num2 *= 10;
            num2 += (version2[j] - '0');
            j++;
        }

        if (num1 > num2)
        {
            return 1;
        }
        else if (num1 < num2)
        {
            return -1;
        }

        // increase past the dot
        i++;
        j++;
    }

    // same versions
    return 0;
}