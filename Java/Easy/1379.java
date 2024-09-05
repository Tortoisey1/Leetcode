/**
 * Definition for a binary tree node.
 * public class TreeNode {
 * int val;
 * TreeNode left;
 * TreeNode right;
 * TreeNode(int x) { val = x; }
 * }
 */

class Solution {
    public final TreeNode getTargetCopy(final TreeNode original, final TreeNode cloned, final TreeNode target) {
        // use a queue to bfs it out level by level
        List<TreeNode> q = new ArrayList<TreeNode>();
        q.add(original);

        List<TreeNode> clone = new ArrayList<TreeNode>();
        clone.add(cloned);

        TreeNode holder;
        TreeNode cloneTemp;
        while (!q.isEmpty()) {
            holder = q.remove(0);
            cloneTemp = clone.remove(0);

            if (holder == target) {
                return cloneTemp;
            }

            if (holder.left != null) {
                q.add(holder.left);
                clone.add(cloneTemp.left);
            }

            if (holder.right != null) {
                q.add(holder.right);
                clone.add(cloneTemp.right);
            }
        }

        return null;
    }
}