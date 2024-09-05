/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode *mergeTrees(struct TreeNode *root1, struct TreeNode *root2)
{
    // either one null will settle the case for both NULL
    if (root1 == NULL)
    {
        return root2;
    }
    else if (root2 == NULL)
    {
        return root1;
    }

    // both not null
    // merge left
    root1->left = mergeTrees(root1->left, root2->left);

    // merge current
    root1->val += root2->val;

    // merge right
    root1->right = mergeTrees(root1->right, root2->right);

    return root1;
}