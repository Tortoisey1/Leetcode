char slowestKey(int *releaseTimes, int releaseTimesSize, char *keysPressed)
{
    int max = releaseTimes[0];
    char answer = keysPressed[0];

    for (int i = 1; i < releaseTimesSize; i++)
    {
        if (releaseTimes[i] - releaseTimes[i - 1] > max)
        {
            answer = keysPressed[i];
            max = releaseTimes[i] - releaseTimes[i - 1];
        }
        else if (releaseTimes[i] - releaseTimes[i - 1] == max)
        {
            if (keysPressed[i] > answer)
            {
                answer = keysPressed[i];
            }
        }
    }

    return answer;
}