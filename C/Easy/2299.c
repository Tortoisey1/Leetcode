bool strongPasswordCheckerII(char *password)
{
    int len = strlen(password);

    if (len < 8)
    { // check length
        return false;
    }

    for (int i = 0; i < len; i++)
    { // check for lower case
        if (password[i] >= 'a' && password[i] <= 'z')
        {
            break;
        }

        if (i == len - 1)
        {
            return false;
        }
    }

    for (int i = 0; i < len; i++)
    { // check for upper case
        if (password[i] >= 'A' && password[i] <= 'Z')
        {
            break;
        }

        if (i == len - 1)
        {
            return false;
        }
    }

    for (int i = 0; i < len; i++)
    { // check for digit
        if (isdigit(password[i]) != 0)
        {
            break;
        }

        if (i == len - 1)
        {
            return false;
        }
    }

    for (int i = 0; i < len; i++)
    { // check for special character
        if (password[i] == '!' || password[i] == '@' || password[i] == '#' ||
            password[i] == '$' || password[i] == '%' || password[i] == '^' ||
            password[i] == '&' || password[i] == '*' || password[i] == '(' ||
            password[i] == ')' || password[i] == '-' || password[i] == '+')
        {
            break;
        }

        if (i == len - 1)
        {
            return false;
        }
    }

    for (int i = 1; i < len; i++)
    { // check consecutive
        if (password[i] == password[i - 1])
        {
            return false;
        }
    }

    return true;
}