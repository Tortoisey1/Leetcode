/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int gcd(int a, int b)
{
    // Find Minimum of a and b
    int result = ((a < b) ? a : b);
    while (result > 0)
    {
        if (a % result == 0 && b % result == 0)
        {
            break;
        }
        result--;
    }

    return result;
}

struct ListNode *insertGreatestCommonDivisors(struct ListNode *head)
{
    struct ListNode *temp = head;

    while (temp->next)
    {
        int first = temp->val;
        int second = temp->next->val;
        int value = gcd(first, second);

        // add new node
        struct ListNode *holder = malloc(sizeof(struct ListNode));
        holder->val = value;
        holder->next = temp->next;
        temp->next = holder;

        // this will go to the new node added
        temp = temp->next;
        // actrual next node
        temp = temp->next;
    }

    return head;
}