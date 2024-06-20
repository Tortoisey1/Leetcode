int findPoisonedDuration(int *timeSeries, int timeSeriesSize, int duration)
{
    // add the duration to current time
    // if overlap then the total add the difference only not the whole duration
    // then hold onto the current max duration
    // since it is increasing so only need one pass
    int total = duration;
    int current = timeSeries[0] + duration;

    for (int i = 1; i < timeSeriesSize; i++)
    {
        if (current > timeSeries[i])
        { // overlapping
            total += duration - (current - timeSeries[i]);
        }
        else
        {
            total += duration;
        }
        current = timeSeries[i] + duration;
    }

    return total;
}