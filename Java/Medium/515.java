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
    public List<Integer> largestValues(TreeNode root) {
        // bfs
        if (root == null) {
            return new ArrayList<Integer>();
        }

        ArrayList<Integer> answer = new ArrayList<Integer>();
        ArrayList<TreeNode> q = new ArrayList<TreeNode>();

        q.add(root);
        answer.add(root.val);

        int size, max;
        TreeNode holder;

        while (q.size() > 0) {

            size = q.size();
            max = Integer.MIN_VALUE;

            for (int i = 0; i < size; i++) {
                holder = q.remove(0);

                if (holder.left != null) {
                    q.add(holder.left);
                    max = (max > holder.left.val) ? max : holder.left.val;
                }

                if (holder.right != null) {
                    q.add(holder.right);
                    max = (max > holder.right.val) ? max : holder.right.val;
                }

            }

            if (q.size() > 0) {
                answer.add(max);
            }
        }

        return answer;

    }
}