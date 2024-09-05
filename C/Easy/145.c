/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *postorderTraversal(struct TreeNode *root, int *returnSize)
{
    if (root == NULL)
    {
        *returnSize = 0;
        return NULL;
    }

    int *lenLeft = malloc(sizeof(int));
    int *lenRight = malloc(sizeof(int));

    int *left = postorderTraversal(root->left, lenLeft);
    int *right = postorderTraversal(root->right, lenRight);

    *returnSize = *lenLeft + *lenRight + 1;

    int *answer = malloc((*returnSize) * sizeof(int));

    // copy left
    if (left != NULL)
    {
        for (int i = 0; i < *lenLeft; i++)
        {
            answer[i] = left[i];
        }
    }

    // copy right
    if (right != NULL)
    {

        for (int j = 0; j < (*lenRight); j++)
        {
            answer[*lenLeft + j] = right[j];
        }
    }

    // add current value
    answer[(*lenLeft) + (*lenRight)] = root->val;

    return answer;
}