double averageWaitingTime(int **customers, int customersSize,
                          int *customersColSize)
{
    double answer = 0;

    int currentTime = customers[0][0] + customers[0][1];
    answer += customers[0][1];

    for (int i = 1; i < customersSize; i++)
    {
        // have to wait for the previous customer order to finish cooking
        // arrival time is before currenttime
        if (customers[i][0] < currentTime)
        {
            currentTime += customers[i][1];
            answer += (currentTime - customers[i][0]);
        }
        else
        {
            currentTime = customers[i][0] + customers[i][1];
            answer += customers[i][1];
        }
    }

    answer /= customersSize;

    return answer;
}