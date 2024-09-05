/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxLevelSum(struct TreeNode *root)
{
    // base case empty tree
    if (root == NULL)
    {
        return -1;
    }

    // use a queue to iterate through the levels
    // use a temp queue to store a queue for the child
    int qSize = 1;
    long long max = root->val;
    struct TreeNode **q = malloc(10001 * sizeof(struct TreeNode *));
    q[0] = root;

    // keep track of the max levels
    int answer = 1;

    // keep track of current level
    int level = 1;

    int childSize;
    struct TreeNode *holder;
    int sum;

    while (qSize > 0)
    {
        childSize = 0;
        sum = 0;

        struct TreeNode **temp = malloc(10001 * sizeof(struct TreeNode *));
        for (int i = 0; i < qSize; i++)
        {
            holder = q[i];

            if (holder->left != NULL)
            {
                temp[childSize++] = holder->left;
            }

            if (holder->right != NULL)
            {
                temp[childSize++] = holder->right;
            }

            sum += holder->val;
        }
        answer = (sum > max) ? level : answer;
        max = (sum > max) ? sum : max;

        qSize = childSize;
        q = temp;
        level++;
    }

    return answer;
}