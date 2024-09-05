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
    public List<Integer> postorderTraversal(TreeNode root) {
        // base case empty tree
        if (root == null) {
            return new ArrayList<>();
        }

        // postorder is left then right then current
        ArrayList<Integer> answer = new ArrayList<>();

        // left
        answer.addAll(postorderTraversal(root.left));

        // right
        answer.addAll(postorderTraversal(root.right));

        // current
        answer.add(root.val);

        return answer;

    }
}