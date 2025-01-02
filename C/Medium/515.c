/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *largestValues(struct TreeNode *root, int *returnSize)
{
    // bfs
    if (!root)
    {
        *returnSize = 0;
        return NULL;
    }

    *returnSize = 1;
    int *answer = malloc(1 * sizeof(int));
    answer[0] = root->val;

    struct TreeNode **q = malloc(10000 * sizeof(struct TreeNode *));
    int qSize = 1;
    q[0] = root;

    struct TreeNode *holder;
    struct TreeNode **tempQ;
    int tempQSize, i, max;

    while (qSize)
    {
        tempQ = malloc(10000 * sizeof(struct TreeNode *));
        tempQSize = 0;

        max = INT_MIN;

        for (i = 0; i < qSize; i++)
        {
            holder = q[i];
            if (holder->left)
            {
                tempQ[tempQSize++] = holder->left;
                max = (max > holder->left->val) ? max : holder->left->val;
            }

            if (holder->right)
            {
                tempQ[tempQSize++] = holder->right;
                max = (max > holder->right->val) ? max : holder->right->val;
            }
        }

        if (tempQSize)
        {
            (*returnSize)++;
            answer = realloc(answer, *returnSize * sizeof(int));
            answer[*returnSize - 1] = max;
        }
        q = tempQ;
        qSize = tempQSize;
    }

    return answer;
}