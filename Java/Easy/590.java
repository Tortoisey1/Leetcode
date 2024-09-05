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
    public List<Integer> postorder(Node root) {
        // base case
        if (root == null) {
            return new ArrayList<>();
        }
        // post order is go left then go right then current node
        // n tree means have to go through each child first

        List<Integer> answer = new ArrayList<>();
        List<Integer> temp;
        List<Node> childrens = root.children;

        for (int i = 0; i < childrens.size(); i++) {
            temp = postorder(childrens.get(i));
            answer.addAll(temp);
        }

        answer.add(root.val);

        return answer;
    }
}