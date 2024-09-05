/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool evaluateTree(struct TreeNode *root)
{
    // is a leaf node
    if (root->left == NULL && root->right == NULL)
    {
        if (root->val)
        {
            return true;
        }
        return false;
    }

    // not leaf node but has 2 children since it is a full binary tree
    bool left;
    bool right;
    // left value
    left = evaluateTree(root->left);

    // right value
    right = evaluateTree(root->right);

    // current value
    if (root->val == 2)
    { // 2 is or
        return (left || right);
    }
    else
    { // 3 is and
        return (left && right);
    }
}