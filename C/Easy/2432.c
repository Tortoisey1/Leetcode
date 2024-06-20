int hardestWorker(int n, int **logs, int logsSize, int *logsColSize)
{
    // use a frequency array to store the time spent by idth worker
    // n can only be until 500
    // calloc will set all to 0
    int *freq = calloc(500, sizeof(int));

    int id;
    int current = logs[0][1];
    freq[logs[0][0]] += current;
    int time;
    // fill the freq array
    for (int i = 1; i < logsSize; i++)
    {
        id = logs[i][0];
        time = logs[i][1] - current;
        if (time > freq[id])
        {
            freq[id] = time;
        }
        current = logs[i][1];
    }

    int answer = -1;
    current = -1;
    // check the freq array
    for (int i = 0; i < 500; i++)
    {
        if (freq[i] > current)
        {
            current = freq[i];
            answer = i;
        }
    }

    free(freq);

    return answer;
}