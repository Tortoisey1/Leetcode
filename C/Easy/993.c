/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool checkChild(struct TreeNode *root, int x, int y)
{
    if (root->left == NULL || root->right == NULL)
    {
        return false;
    }

    if (root->left->val == x && root->right->val == y)
    {
        return true;
    }

    if (root->right->val == x && root->left->val == y)
    {
        return true;
    }

    return false;
}

bool isCousins(struct TreeNode *root, int x, int y)
{
    // base case is empty tree
    if (root == NULL)
    {
        return false;
    }
    // use a queue to store a certain level
    // max number of nodes is 100
    struct TreeNode **q = malloc(100 * sizeof(struct TreeNode *));

    // use a temp queue to store the child level
    struct TreeNode **temp;

    int qSize = 1;
    q[0] = root;

    // this will hold if the current floor has one of it alr
    // so if iterate through doesnt update to 2 then its false;
    int current = 0;

    // to store the child q size
    int tempSize;

    // to hold the current node pointed at by the queue
    struct TreeNode *holder;

    while (qSize > 0)
    {
        tempSize = 0;
        temp = malloc(100 * sizeof(struct TreeNode *));

        for (int i = 0; i < qSize; i++)
        {
            holder = q[i];

            // check if the 2 childs are found in the same parent
            if (checkChild(holder, x, y))
            {
                return false;
            }

            if (holder->left != NULL)
            {
                temp[tempSize++] = holder->left;
            }

            if (holder->right != NULL)
            {
                temp[tempSize++] = holder->right;
            }

            if (holder->val == x || holder->val == y)
            {
                current++;
            }
        }

        if (current == 2)
        {
            return true;
        }
        else if (current == 1)
        {
            return false;
        }

        qSize = tempSize;
        q = temp;
    }

    return false;
}