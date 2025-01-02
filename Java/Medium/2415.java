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
    public TreeNode reverseOddLevels(TreeNode root) {
        // bfs
        int level = 0;

        TreeNode temp;

        ArrayList<TreeNode> q = new ArrayList<>();
        q.add(root);
        while (!q.isEmpty()) {
            if (level % 2 == 1) {
                for (int i = 0; i < q.size() / 2; i++) {
                    swap(q.get(i), q.get(q.size() - 1 - i));
                }
            }

            int size = q.size();
            for (int j = 0; j < size; j++) {
                temp = q.get(0);
                q.remove(0);

                if (temp.left != null) {
                    q.add(temp.left);
                }

                if (temp.right != null) {
                    q.add(temp.right);
                }
            }

            level++;

        }
        return root;
    }

    private void swap(TreeNode root1, TreeNode root2) {
        int temp = root1.val;
        root1.val = root2.val;
        root2.val = temp;
    }
}