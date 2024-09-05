int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplifyFraction(int *numerator, int *denominator)
{
    int commonDivisor = gcd(*numerator, *denominator);
    *numerator /= commonDivisor;
    *denominator /= commonDivisor;

    if (*denominator < 0)
    {
        *denominator *= -1;
        *numerator *= -1;
    }
}

char *fractionAddition(char *expression)
{
    // start of number denoted by - or +
    // keep track of a numerator and demoninator seperately
    // if its not the same change the respective denominator to be the same
    int numerator = 1;
    int denominator;
    int temp;
    int i = 0;

    // get the first number

    if (expression[i] == '-')
    {
        numerator = -1;
    }

    temp = 0;

    // get the numerator first
    while (expression[i] != '/')
    {
        temp *= 10;
        temp += expression[i] - '0';
        i++;
    }

    numerator *= temp;

    i++; // clear the /
    // get the deonminator
    temp = 0;
    while (expression[i] >= '0' && expression[i] <= '9')
    {
        temp *= 10;
        temp += expression[i] - '0';
        i++;
    }
    denominator = temp;

    int tempnum;
    int tempdenom;

    for (int j = i; j < strlen(expression); j++)
    {
        // get the fraction
        tempnum = 1;

        if (expression[j] == '-')
        {
            tempnum = -1;
        }

        temp = 0;

        // get the numerator first
        while (expression[j] != '/')
        {
            temp *= 10;
            temp += expression[j] - '0';
            j++;
        }

        tempnum *= temp;

        j++; // clear the /
        // get the deonminator
        temp = 0;
        while (expression[j] >= '0' && expression[j] <= '9')
        {
            temp *= 10;
            temp += expression[j] - '0';
            j++;
        }
        denominator = temp;

        // compare bases
        if (tempdenom != denominator)
        {
            // check if one is a multiple of another otherwise need to cross
            // multiply
            if (denominator > tempdenom)
            {
                if (denominator % tempdenom == 0)
                {
                    tempdenom *= (denominator / tempdenom);
                    tempnum *= (denominator / tempdenom);
                }
                else
                {
                    tempnum *= denominator;
                    numerator *= tempdenom;
                    denominator *= tempdenom;
                }
            }
            else
            {
                if (tempdenom % denominator == 0)
                {
                    denominator *= (tempdenom / denominator);
                    numerator *= (tempdenom / denominator);
                }
                else
                {
                    tempnum *= denominator;
                    numerator *= tempdenom;
                    denominator *= tempdenom;
                }
            }
        }
        numerator += tempnum;
        // check if is an integer
        if (numerator % denominator == 0)
        {
            numerator /= denominator;
            denominator = 1;
        }
    }

    simplifyFraction(&numerator, &denominator);

    int bufferSize = 20;
    char *answer = malloc(bufferSize * sizeof(char));

    // convert fraction to string
    if (numerator < 0)
    {
        snprintf(answer, bufferSize, "-%d/%d", -numerator, denominator);
    }
    else
    {
        snprintf(answer, bufferSize, "%d/%d", numerator, denominator);
    }

    return answer;
}
