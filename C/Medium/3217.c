/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *modifiedList(int *nums, int numsSize, struct ListNode *head)
{
    // use a hashmap to store the values in the nums array
    // so can have faster lookup time
    int *table = calloc(100001, sizeof(int));

    int num;

    // fill the table
    for (int i = 0; i < numsSize; i++)
    {
        num = nums[i];
        table[num] = 1;
    }

    // a dummy node for front of the list
    struct ListNode *temp = malloc(sizeof(struct ListNode));
    temp->next = head;
    struct ListNode *holder = temp;

    // go through linked list
    // must take into account the first head node might be deleted
    while (holder->next != NULL)
    {
        num = holder->next->val;

        if (table[num])
        { // illegal value
            holder->next = holder->next->next;
        }
        else
        {
            holder = holder->next;
        }
    }

    return temp->next;
}