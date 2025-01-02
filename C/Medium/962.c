int maxWidthRamp(int *nums, int numsSize)
{
    // 2 pointer approach
    // use another array to store the max number filled from the end to the
    // start
    int answer = 0;
    int *maxArr = malloc(numsSize * sizeof(int));

    maxArr[numsSize - 1] = nums[numsSize - 1];
    for (int i = numsSize - 2; i >= 0; i--)
    {
        maxArr[i] = (nums[i] > maxArr[i + 1]) ? nums[i] : maxArr[i + 1];
    }

    // right pointer will be the max array and left is og array
    // shift the right pointer and check whether left is still smaller
    //  it works because the right pointer points to most max currently
    // if left is bigger
    // shift left up by once
    // since moving right will just make it either the same or smaller
    int left = 0;
    int right = 0;
    while (right < numsSize)
    {
        while (left < right && nums[left] > maxArr[right])
        {
            left++;
        }

        answer = (answer > right - left) ? answer : right - left;
        right++;
    }

    return answer;
}