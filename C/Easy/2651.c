int findDelayedArrivalTime(int arrivalTime, int delayedTime)
{
    int answer = arrivalTime + delayedTime;
    answer = (answer >= 24) ? answer - 24 : answer;
    return answer;
}