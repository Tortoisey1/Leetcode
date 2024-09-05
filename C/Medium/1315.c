/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sumEvenGrandparent(struct TreeNode *root)
{
    // base case is empty tree
    if (root == NULL)
    {
        return 0;
    }

    int answer = 0;
    struct TreeNode *holder;
    // check if root is even
    if (root->val % 2 == 0)
    {
        if (root->left != NULL)
        {
            holder = root->left;
            if (holder->left != NULL)
            {
                answer += holder->left->val;
            }

            if (holder->right != NULL)
            {
                answer += holder->right->val;
            }
        }
        if (root->right != NULL)
        {
            holder = root->right;
            if (holder->left != NULL)
            {
                answer += holder->left->val;
            }

            if (holder->right != NULL)
            {
                answer += holder->right->val;
            }
        }
    }

    answer += sumEvenGrandparent(root->left);
    answer += sumEvenGrandparent(root->right);

    return answer;
}