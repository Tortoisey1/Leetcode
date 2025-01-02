/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool flipEquiv(struct TreeNode* root1, struct TreeNode* root2) {
    // recursion
    // both are empty trees
    if (root1 == NULL && root2 == NULL) {
        return true;
    }

    // only one is empty
    if (root1 == NULL && root2 != NULL) {
        return false;
    }

    if (root1 != NULL && root2 == NULL) {
        return false;
    }

    if (root1->val != root2->val) {
        return false;
    }

    bool noSwap = flipEquiv(root1->left, root2->left) &&
                  flipEquiv(root1->right, root2->right);

    bool swap = flipEquiv(root1->left, root2->right) &&
                flipEquiv(root1->right, root2->left);

    return noSwap || swap;
}