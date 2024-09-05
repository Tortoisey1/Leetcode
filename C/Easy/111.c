/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int left = INT_MAX;
    int right = INT_MAX;

    if (root->left != NULL)
    {
        left = minDepth(root->left);
    }

    if (root->right != NULL)
    {
        right = minDepth(root->right);
    }

    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {
        if (left < right)
        {
            return left + 1;
        }
        else
        {
            return right + 1;
        }
    }
}