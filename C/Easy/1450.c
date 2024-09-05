int busyStudent(int *startTime, int startTimeSize, int *endTime,
                int endTimeSize, int queryTime)
{
    int count = 0;

    int start;
    int end;
    for (int i = 0; i < startTimeSize; i++)
    {
        start = startTime[i];
        end = endTime[i];
        if ((queryTime >= start) && (queryTime <= end))
        {
            count++;
        }
    }

    return count;
}