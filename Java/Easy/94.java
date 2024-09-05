/**
 * Definition for a binary tree node.
 * public class TreeNode {
 * int val;
 * TreeNode left;
 * TreeNode right;
 * TreeNode() {}
 * TreeNode(int val) { this.val = val; }
 * TreeNode(int val, TreeNode left, TreeNode right) {
 * this.val = val;
 * this.left = left;
 * this.right = right;
 * }
 * }
 */
class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        // base case empty tree
        if (root == null) {
            return new ArrayList<>();
        }

        // inorder means go left then current then right
        List<Integer> answer = new ArrayList<>();

        // left
        answer.addAll(inorderTraversal(root.left));

        // current
        answer.add(root.val);

        // right
        answer.addAll(inorderTraversal(root.right));

        return answer;
    }
}