char *reformatDate(char *date)
{
    char *answer = malloc(11 * sizeof(char));

    answer[4] = '-';
    answer[7] = '-';
    int len = strlen(date);
    // check the date
    if (date[1] == 't' || date[1] == 's' || date[1] == 'r' ||
        date[1] == 'n')
    { // 2 days
        answer[8] = '0';
        answer[9] = date[0];
    }
    else
    {
        answer[8] = date[0];
        answer[9] = date[1];
    }

    // 3 letter always the month
    if (date[len - 8] == 'J')
    { // Jan Jun Jul
        if (date[len - 7] == 'a')
        { // Jan
            answer[5] = '0';
            answer[6] = '1';
        }
        else if (date[len - 6] == 'n')
        { // jun
            answer[5] = '0';
            answer[6] = '6';
        }
        else
        { // july
            answer[5] = '0';
            answer[6] = '7';
        }
    }
    else if (date[len - 8] == 'F')
    { // Feb
        answer[5] = '0';
        answer[6] = '2';
    }
    else if (date[len - 8] == 'M')
    { // mar may
        if ((date[len - 6] == 'r'))
        { // mar
            answer[5] = '0';
            answer[6] = '3';
        }
        else
        { // may
            answer[5] = '0';
            answer[6] = '5';
        }
    }
    else if (date[len - 8] == 'A')
    { // April Aug
        if (date[len - 7] == 'p')
        { // Apr
            answer[5] = '0';
            answer[6] = '4';
        }
        else
        { // Aug
            answer[5] = '0';
            answer[6] = '8';
        }
    }
    else if (date[len - 8] == 'S')
    { // Sep
        answer[5] = '0';
        answer[6] = '9';
    }
    else if (date[len - 8] == 'O')
    { // Oct
        answer[5] = '1';
        answer[6] = '0';
    }
    else if (date[len - 8] == 'N')
    { // Nov
        answer[5] = '1';
        answer[6] = '1';
    }
    else
    { // Dec
        answer[5] = '1';
        answer[6] = '2';
    }

    // last 4 is the year
    answer[0] = date[len - 4];
    answer[1] = date[len - 3];
    answer[2] = date[len - 2];
    answer[3] = date[len - 1];

    answer[10] = '\0';

    return answer;
}