/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char **fizzBuzz(int n, int *returnSize)
{

    char **answer = malloc(n * sizeof(char *));
    for (int i = 1; i <= n; i++)
    {
        if (i % 15 == 0)
        {
            answer[i - 1] = malloc(9 * sizeof(char));
            answer[i - 1] = "FizzBuzz";
        }
        else if (i % 5 == 0)
        {
            answer[i - 1] = malloc(5 * sizeof(char));
            answer[i - 1] = "Buzz";
        }
        else if (i % 3 == 0)
        {
            answer[i - 1] = malloc(5 * sizeof(char));
            answer[i - 1] = "Fizz";
        }
        else
        {
            answer[i - 1] = malloc(10001 * sizeof(char));
            sprintf(answer[i - 1], "%d", i);
        }
    }

    *returnSize = n;
    return answer;
}