/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode *removeLeafNodes(struct TreeNode *root, int target)
{
    // if empty tree
    if (root == NULL)
    {
        return root;
    }

    // go left
    root->left = removeLeafNodes(root->left, target);

    // go right
    root->right = removeLeafNodes(root->right, target);

    // check current
    if (root->left == NULL && root->right == NULL)
    { // check if is a leaf
        if (root->val == target)
        { // check if match with target
            return NULL;
        }
    }

    return root;
}