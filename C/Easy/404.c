/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sumOfLeftLeaves(struct TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int sum = 0;

    int left = sumOfLeftLeaves(root->left);
    int right = sumOfLeftLeaves(root->right);

    if (root->left != NULL)
    {
        if (root->left->left == NULL && root->left->right == NULL)
        {
            sum = root->left->val;
        }
    }

    sum += left;
    sum += right;

    return sum;
}