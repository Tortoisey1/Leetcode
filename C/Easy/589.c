/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *preorder(struct Node *root, int *returnSize)
{
    // preorder is current then left then right

    // base case
    if (root == NULL)
    {
        *returnSize = 0;
        return NULL;
    }

    struct Node **childrens = root->children;
    int *answer = malloc(sizeof(int));
    answer[0] = root->val;
    *returnSize = 1;
    int *temp, *childrenSize = malloc(sizeof(int));
    for (int i = 0; i < root->numChildren; i++)
    {
        temp = preorder(childrens[i], childrenSize);

        if (temp != NULL)
        {
            answer =
                realloc(answer, (*returnSize + *childrenSize) * sizeof(int));
            // copy over the children to answer
            for (int j = 0; j < *childrenSize; j++)
            {
                answer[*returnSize + j] = temp[j];
            }
            *returnSize += *childrenSize;
        }
    }

    return answer;
}