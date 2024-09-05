int minimumRecolors(char *blocks, int k)
{
    // find the section with k blocks that have the highest number of black
    int count = 0;
    int answer = k;
    int len = strlen(blocks);
    for (int i = 0; i < k; i++)
    {
        if (blocks[i] == 'B')
        {
            count++;
        }
    }

    answer = (k - count < answer) ? k - count : answer;

    int left = 0;
    int right = k;
    while (right < len)
    {
        if (blocks[left] == 'B')
        {
            count--;
        }

        if (blocks[right] == 'B')
        {
            count++;
        }

        left++;
        right++;
        answer = (k - count < answer) ? k - count : answer;
    }

    return answer;
}