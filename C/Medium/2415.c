/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void swap(struct TreeNode *root1, struct TreeNode *root2)
{
    int temp;

    temp = root1->val;
    root1->val = root2->val;
    root2->val = temp;
}

struct TreeNode *reverseOddLevels(struct TreeNode *root)
{
    // use a queue
    // bfs
    int level = 0;

    // set up the tree
    struct TreeNode **q = malloc(1 * sizeof(struct TreeNode *));
    q[0] = root;
    int qSize = 1;

    int count;
    struct TreeNode *holder;
    struct TreeNode **temp;

    while (qSize > 0)
    {
        count = 0;
        temp = NULL;

        // reverse value
        if (level % 2 == 1)
        {
            for (int j = 0; j < qSize / 2; j++)
            {
                swap(q[j], q[qSize - j - 1]);
            }
        }

        // add to new queue
        for (int i = 0; i < qSize; i++)
        {
            holder = q[i];

            if (holder->left)
            {
                temp = realloc(temp, (count + 1) * sizeof(struct TreeNode *));
                temp[count++] = holder->left;
            }

            if (holder->right)
            {
                temp = realloc(temp, (count + 1) * sizeof(struct TreeNode *));
                temp[count++] = holder->right;
            }
        }

        qSize = count;
        q = temp;
        level++;
    }

    return root;
}