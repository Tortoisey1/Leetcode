int compare(const void* a, const void* b) { return (*(int*)a - *(int*)b); }

int maxCount(int* banned, int bannedSize, int n, int maxSum) {
    // always take the smallest number - greedy approach
    // sort the banned integers first
    int count = 0;
    int sum = 0;

    // sort the banned integers
    qsort(banned, bannedSize, sizeof(int), compare);

    // for look up
    int banPointer = 0;

    for (int i = 1; i <= n; i++) {
     // Skip duplicates in banned array
        while (banPointer < bannedSize && banned[banPointer] < i) {
            banPointer++;
        }

        // Check if the current number is banned
        if (banPointer < bannedSize && i == banned[banPointer]) {
            continue;
        }

        // Check if can include the current number
        if (sum + i <= maxSum) {
            count++;
            sum += i;
        } else {
            break;
        }
    }

    return count;
}