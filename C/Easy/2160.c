// Comparison function
int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

int minimumSum(int num)
{
    // small digits infront big digits at the back
    // use an array to store the numbers
    // then sort the array
    int *arr = malloc(4 * sizeof(int));
    for (int i = 0; i < 4; i++)
    {
        arr[i] = num % 10;
        num /= 10;
    }
    qsort(arr, 4, sizeof(int), compare);
    int answer = arr[0] * 10 + arr[2] + arr[1] * 10 + arr[3];
    return answer;
}