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
    public List<Integer> preorderTraversal(TreeNode root) {
        // base case
        if (root == null) {
            return new ArrayList<>();
        }

        // preorder is current then left then right
        ArrayList<Integer> answer = new ArrayList<>();

        // current
        answer.add(root.val);

        // left
        answer.addAll(preorderTraversal(root.left));

        // right
        answer.addAll(preorderTraversal(root.right));

        return answer;

    }
}