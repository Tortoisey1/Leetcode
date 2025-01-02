char *longestDiverseString(int a, int b, int c)
{
    // always add the most without breaking first
    // then when going to break i add the next most
    // but must always check whether it is the most to be added
    char *answer = malloc((a + b + c + 1) * sizeof(char));
    int len = 0;

    // keep track of the number of current same type character added
    int curra = 0, currb = 0, currc = 0;
    int total = a + b + c;
    for (int i = 0; i < total; i++)
    {
        if ((a >= b && a >= c && curra < 2) ||
            (a > 0 &&
             ((currb == 2 && a >= c) ||
              (currc == 2 &&
               a >= b))))
        { // a is the most or it can be that the rest max
            // and this is th most so shld add this next
            answer[len++] = 'a';
            curra++;
            a--;
            currb = 0;
            currc = 0;
        }

        else if ((b >= a && b >= c && currb < 2) ||
                 (b > 0 &&
                  ((curra == 2 && b >= c) ||
                   (currc == 2 &&
                    b >= a))))
        { // b is the most or it can be that the rest max
            // and this is the most so shld add this next
            answer[len++] = 'b';
            currb++;
            b--;
            curra = 0;
            currc = 0;
        }

        else if ((c >= b && c >= a && currc < 2) ||
                 (c > 0 &&
                  ((curra == 2 && c >= b) ||
                   (currb == 2 &&
                    c >= a))))
        { // a is the most or it can be that the rest max
            // and this is th most so shld add this next
            answer[len++] = 'c';
            currc++;
            c--;
            curra = 0;
            currb = 0;
        }
    }

    answer[len] = '\0';
    return answer;
}