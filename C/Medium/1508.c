int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

int rangeSum(int *nums, int numsSize, int n, int left, int right)
{
    // brute force
    // create new array to store the sub array sums
    int size = (numsSize * (numsSize + 1) / 2.0);
    int *temp = malloc(size * sizeof(int));

    // fill the new array
    int current = 0;
    for (int i = 0; i < numsSize; i++)
    {
        int sum = 0;
        for (int j = i; j < numsSize; j++)
        {
            sum += nums[j];
            temp[current] = sum;
            current++;
        }
    }

    // sort the temp array
    qsort(temp, size, sizeof(int), compare);

    // retrieve specific numbers from the new array
    int answer = 0;
    int mod = pow(10, 9) + 7;
    for (int i = left - 1; i < right; i++)
    {
        answer = (answer + temp[i]) % mod;
    }

    return answer;
}