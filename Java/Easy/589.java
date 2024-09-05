/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, List<Node> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    public List<Integer> preorder(Node root) {
        // base case
        if (root == null) {
            return new ArrayList<>();
        }

        // preorder is current first then child

        ArrayList<Integer> answer = new ArrayList<>();

        // add current
        answer.add(root.val);

        // add the child nodes
        List<Node> childrens = root.children;
        for (Node child : childrens) {
            answer.addAll(preorder(child));
        }

        return answer;
    }
}