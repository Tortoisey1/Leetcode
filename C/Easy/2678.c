int countSeniors(char **details, int detailsSize)
{
    int count = 0;
    char *detail;
    for (int i = 0; i < detailsSize; i++)
    {
        detail = details[i];
        if (detail[11] > '6' || (detail[11] == '6' && detail[12] > '0'))
        {
            count++;
        }
    }

    return count;
}