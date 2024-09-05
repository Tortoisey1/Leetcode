/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *nodesBetweenCriticalPoints(struct ListNode *head, int *returnSize)
{
    int *answer = malloc(2 * sizeof(int));
    answer[0] = -1;
    answer[1] = -1;
    *returnSize = 2;

    int min = INT_MAX;
    struct ListNode *prev = head;
    struct ListNode *curr = head->next;
    int currentIndex = 1;
    int prevCI = 0;
    int firstCI = 0;

    while (curr->next != NULL)
    {
        // check if current node is a critical point
        if ((curr->val > prev->val && curr->val > curr->next->val) ||
            (curr->val < prev->val && curr->val < curr->next->val))
        {
            // check if this is first critical point
            if (prevCI == 0)
            {
                prevCI = currentIndex;
                firstCI = currentIndex;
            }
            else
            {
                min = min < (currentIndex - prevCI) ? min
                                                    : (currentIndex - prevCI);
                prevCI = currentIndex;
            }
        }
        currentIndex++;
        prev = curr;
        curr = curr->next;
    }

    // if there is 2 CI
    if (min != INT_MAX)
    {
        answer[0] = min;
        answer[1] = prevCI - firstCI;
    }

    return answer;
}