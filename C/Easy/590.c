
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
int *postorder(struct Node *root, int *returnSize)
{
    // base case if empty
    if (root == NULL)
    {
        *returnSize = 0;
        return NULL;
    }

    // post order is visit left first then visit right then visit current node
    // recurse on each child
    // have to realloc for every child to make it a dynamic array

    // n children stored as array
    struct Node **childrens = root->children;

    *returnSize = 0;
    int *answer = malloc(sizeof(int));

    for (int i = 0; i < root->numChildren; i++)
    {
        int *lenChild = malloc(sizeof(int));
        int *child = postorder(childrens[i], lenChild);

        answer = realloc(answer, (*returnSize + *lenChild) * sizeof(int));

        // copy whats in the child over into the real answer array
        for (int j = 0; j < *lenChild; j++)
        {
            answer[*returnSize + j] = child[j];
        }

        *returnSize = *returnSize + *lenChild;
    }

    *returnSize = *returnSize + 1;

    answer = realloc(answer, (*returnSize + 1) * sizeof(int));

    // add current value
    answer[*returnSize - 1] = root->val;

    return answer;
}