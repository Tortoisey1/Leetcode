void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int numRescueBoats(int *people, int peopleSize, int limit)
{
    int weight;
    int answer = 0;
    int left = 0;
    int right = peopleSize - 1;
    quickSort(people, 0, right);
    // 2 pointers
    while (left <= right)
    {
        weight = people[left] + people[right];
        answer++;
        if (weight <= limit)
        {
            left++;
            right--;
        }
        else
        {
            right--;
        }
    }

    return answer;
}