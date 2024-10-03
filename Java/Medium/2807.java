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
    public ListNode insertGreatestCommonDivisors(ListNode head) {
        ListNode temp = head;

        while (temp.next != null) {
            int first = temp.val;
            int second = temp.next.val;

            int value = gcd(first, second);

            ListNode holder = new ListNode(value, temp.next);
            temp.next = holder;

            // go to the newly added node
            temp = temp.next;
            // actual next node
            temp = temp.next;
        }

        return head;

    }

    public int gcd(int first, int second) {

        int answer = (first > second) ? second : first;
        while (answer > 1) {
            if (first % answer == 0 && second % answer == 0) {
                break;
            }

            answer--;
        }

        return answer;
    }
}