/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */
int **levelOrder(struct TreeNode *root, int *returnSize,
                 int **returnColumnSizes)
{
    // base case empty tree
    if (root == NULL)
    {
        *returnSize = 0;
        *returnColumnSizes = NULL;
        return NULL;
    }
    // use a queue and iteratively do this
    // q pointer to point to the current level
    // iterate through to get the child which is the next level
    // use a count to count number of child added
    // so i dont need use another pointer to store another array of node
    // pointers
    // then once q is empty point to this new level
    // repeat until theres no more new level

    // queue for current level
    struct TreeNode **q = malloc(2001 * sizeof(struct TreeNode *));
    q[0] = root;
    int qSize = 1;

    // memory for answer and columnsizes
    int **answer = malloc(2001 * sizeof(int *));
    *returnColumnSizes = malloc(2001 * sizeof(int *));

    *returnSize = 0;

    struct TreeNode *holder;

    int count;
    while (qSize > 0)
    {

        answer[*returnSize] = malloc(qSize * sizeof(int));
        (*returnColumnSizes)[*returnSize] = qSize;

        // store the temp q with new child nodes
        struct TreeNode **temp = malloc(2001 * sizeof(struct TreeNode *));

        count = 0;

        for (int i = 0; i < qSize; i++)
        {
            holder = q[i];
            answer[*returnSize][i] = holder->val;
            if (holder->left != NULL)
            {
                temp[count++] = holder->left;
            }
            if (holder->right != NULL)
            {
                temp[count++] = holder->right;
            }
        }

        q = temp;
        qSize = count;

        (*returnSize)++;
    }

    return answer;
}