/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int findBottomLeftValue(struct TreeNode *root)
{
    // base case is empty tree
    if (root == NULL)
    {
        return -1;
        ;
    }

    int answer;

    struct TreeNode **q = malloc(10001 * sizeof(struct TreeNode *));
    int qLen = 1;
    q[0] = root;

    struct TreeNode **childs;
    int childLen;

    struct TreeNode *holder;

    while (qLen > 0)
    {
        childLen = 0;

        childs = malloc(10001 * sizeof(struct TreeNode *));

        answer = q[0]->val;

        for (int i = 0; i < qLen; i++)
        {
            holder = q[i];

            if (holder->left != NULL)
            {
                childs[childLen++] = holder->left;
            }

            if (holder->right != NULL)
            {
                childs[childLen++] = holder->right;
            }
        }

        qLen = childLen;
        q = childs;
    }

    return answer;
}