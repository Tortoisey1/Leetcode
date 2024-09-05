/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int deepestLeavesSum(struct TreeNode *root)
{
    // base case empty tree
    if (root == NULL)
    {
        return 0;
    }

    // use a queue to store the current level of the tree
    // use a sum to store the current sum
    // use a temp queue to store the new child level
    // once q has no size it means that the prev sum is the last level
    int sum;
    int counter = 0;

    struct TreeNode **q = malloc(10001 * sizeof(struct TreeNode *));

    struct TreeNode *holder;

    q[0] = root;
    int qSize = 1;

    while (qSize > 0)
    {
        sum = 0;
        counter = 0;

        struct TreeNode **temp = malloc(10001 * sizeof(struct TreeNode *));

        for (int i = 0; i < qSize; i++)
        {
            holder = q[i];
            sum += holder->val;

            if (q[i]->left != NULL)
            {
                temp[counter++] = q[i]->left;
            }

            if (q[i]->right != NULL)
            {
                temp[counter++] = q[i]->right;
            }
        }

        qSize = counter;
        q = temp;
    }

    return sum;
}