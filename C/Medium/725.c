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
struct ListNode **splitListToParts(struct ListNode *head, int k,
                                   int *returnSize)
{
    struct ListNode **answer = malloc(k * sizeof(struct ListNode *));
    // get the total size of the array
    // then if size/k remainder is 0 means no need add anything
    // if theres a remainder
    int size = 0;
    struct ListNode *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        size++;
    }

    int kSize = size / k;
    int remainder = size % k;

    temp = head;
    struct ListNode *holder;
    int curr;

    for (int i = 0; i < k; i++)
    {
        answer[i] = temp;
        curr = 0;
        if (temp == NULL)
        {
            continue;
        }

        if (remainder)
        {
            remainder--;
            curr = 1;
        }
        curr += kSize;
        for (int j = 0; j < curr - 1; j++)
        {
            temp = temp->next;
        }

        holder = temp->next;
        temp->next = NULL;
        temp = holder;
    }

    *returnSize = k;
    return answer;
}