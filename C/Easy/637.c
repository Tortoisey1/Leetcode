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
double *averageOfLevels(struct TreeNode *root, int *returnSize)
{
    *returnSize = 0;

    if (root == NULL)
    {
        return NULL;
    }

    // use a queue to store the nodes
    // use a temporary queue to store the new child nodes after travesing
    // current q
    // queue is an array of treeNode*
    struct TreeNode **q = malloc(1 * sizeof(struct TreeNode *));
    q[0] = root;

    int qLen = 1;
    double *answer = NULL;
    double total;
    int count;

    struct TreeNode *holder;

    struct TreeNode **temp;

    while (qLen > 0)
    {

        total = 0;
        count = 0;

        temp = NULL;

        for (int i = 0; i < qLen; i++)
        {
            holder = q[i];
            total += (holder->val);

            if (holder->left != NULL)
            {
                count++;
                temp = realloc(temp, count * sizeof(struct TreeNode *));
                temp[count - 1] = holder->left;
            }

            if (holder->right != NULL)
            {
                count++;
                temp = realloc(temp, count * sizeof(struct TreeNode *));
                temp[count - 1] = holder->right;
            }
        }

        total /= qLen;

        (*returnSize)++;
        answer = realloc(answer, (*returnSize) * sizeof(double));
        answer[(*returnSize) - 1] = total;

        qLen = count;
        q = temp;
    }
    return answer;
}