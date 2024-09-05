/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */

int maxDepth(struct Node *root)
{
    // base case empty tree
    if (root == NULL)
    {
        return 0;
    }

    int answer = 0;
    int temp;
    struct Node **childs = root->children;

    // recurse on the children
    for (int i = 0; i < root->numChildren; i++)
    {
        temp = maxDepth(childs[i]);
        answer = (temp > answer) ? temp : answer;
    }

    answer++;

    return answer;
}