/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int way(struct TreeNode *root, int sum)
{
    if (root == NULL)
    {
        return 0;
    }

    sum = sum * 10 + root->val;

    if (root->left == NULL && root->right == NULL)
    {
        return sum;
    }

    int left = 0;
    int right = 0;
    if (root->left != NULL)
    {
        left = way(root->left, sum);
    }
    if (root->right != NULL)
    {
        right = way(root->right, sum);
    }

    return left + right;
}

int sumNumbers(struct TreeNode *root) { return way(root, 0); }
