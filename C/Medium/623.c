/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode *addOneRow(struct TreeNode *root, int val, int depth)
{
    // empty tree
    if (root == NULL)
    {
        return NULL;
    }

    // depth is 1 from the start
    if (depth == 1)
    {
        struct TreeNode *answer = malloc(sizeof(struct TreeNode));
        answer->val = val;
        answer->left = root;
        answer->right = NULL;
        return answer;
    }

    if (depth == 2)
    {
        // left side
        struct TreeNode *temp1 = malloc(sizeof(struct TreeNode));
        temp1->val = val;
        temp1->left = root->left;
        temp1->right = NULL;
        root->left = temp1;

        // right side
        struct TreeNode *temp2 = malloc(sizeof(struct TreeNode));
        temp2->val = val;
        temp2->right = root->right;
        temp2->left = NULL;
        root->right = temp2;

        return root;
    }
    else
    {
        root->left = addOneRow(root->left, val, depth - 1);
        root->right = addOneRow(root->right, val, depth - 1);
        return root;
    }
}