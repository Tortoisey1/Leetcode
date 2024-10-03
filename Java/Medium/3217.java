/**
 * Definition for singly-linked list.
 * public class ListNode {
 * int val;
 * ListNode next;
 * ListNode() {}
 * ListNode(int val) { this.val = val; }
 * ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode modifiedList(int[] nums, ListNode head) {
        // store the numbers to remove
        Set<Integer> numbers = new HashSet<>();
        for (int i : nums) {
            numbers.add(i);
        }

        // iterate through the ListNodes
        // use a dummy to store the start
        ListNode dummy = new ListNode();
        dummy.next = head;

        int num;
        ListNode holder = dummy;
        while (holder.next != null) {
            num = holder.next.val;
            // if invalid
            if (numbers.contains(num)) {
                holder.next = holder.next.next;
            } else {// need shift my holder to the next one
                holder = holder.next;
            }
        }

        return dummy.next;
    }
}