/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *removeNodes(struct ListNode *head)
{
    if (head == NULL)
    {
        return head;
    }

    head->next = removeNodes(head->next);

    if (head->next == NULL)
    {
        return head;
    }
    else
    {
        if (head->val < head->next->val)
        {
            return head->next;
        }
        else
        {
            return head;
        }
    }

    return NULL;
}