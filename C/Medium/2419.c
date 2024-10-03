int longestSubarray(int *nums, int numsSize)
{
    // should and the biggest number
    // so the subarray will contain the biggest number
    // contain a continuous segment of the largest number
    int max = nums[0];
    int answer = 1;

    int count = 1;
    // count the number of max value instantly as iterate through
    for (int i = 1; i < numsSize; i++)
    {
        // check if the number is greater
        if (nums[i] > max)
        {
            count = 1;
            max = nums[i];
            answer = count;
        }
        else if (nums[i] == max)
        {
            count++;
            answer = (answer > count) ? answer : count;
        }
        else
        {
            // end of the subarray
            // now the number is smaller
            answer = (answer > count) ? answer : count;
            count = 0;
        }
    }

    return answer;
}