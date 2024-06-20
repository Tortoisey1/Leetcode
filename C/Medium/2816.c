/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *doubleIt(struct ListNode *head)
{
    // 2 pointer approach
    struct ListNode *prev = head;
    struct ListNode *current = head->next;
    prev->val *= 2;
    if (prev->val > 9)
    {
        struct ListNode *temp = malloc(sizeof(struct ListNode));
        temp->val = 1;
        temp->next = head;
        head->val %= 10;
        head = temp;
    }

    while (current)
    {
        current->val *= 2;
        prev->val += (current->val / 10);
        current->val %= 10;
        current = current->next;
        prev = prev->next;
    }

    return head;
}