/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool dfs(struct ListNode *head, struct TreeNode *root)
{
    // end of linked list
    if (!head)
    {
        return true;
    }

    // end of tree not linked list
    if (!root)
    {
        return false;
    }

    if (root->val != head->val)
    {
        return false;
    }
    return dfs(head->next, root->left) || dfs(head->next, root->right);
}

bool isSubPath(struct ListNode *head, struct TreeNode *root)
{
    // use dfs
    // check base case empty tree
    if (!root)
    {
        return false;
    }
    return dfs(head, root) || isSubPath(head, root->left) ||
           isSubPath(head, root->right);
}