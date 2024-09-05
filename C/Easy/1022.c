/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sum(struct TreeNode *root, int current)
{
    if (root == NULL)
    {
        return 0;
    }

    int answer = 0;

    int temp = current * 2;
    temp = temp + root->val;

    // leaf node
    if (root->left == NULL && root->right == NULL)
    {
        return temp;
    }

    if (root->left != NULL)
    {
        answer += sum(root->left, temp);
    }

    if (root->right != NULL)
    {
        answer += sum(root->right, temp);
    }

    return answer;
}

int sumRootToLeaf(struct TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return sum(root, 0);
}