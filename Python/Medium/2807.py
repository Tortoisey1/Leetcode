# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
def gcd(a: int, b: int) -> int:
    while b:
        a, b = b, a % b
    return a


class Solution:
    def insertGreatestCommonDivisors(
        self, head: Optional[ListNode]
    ) -> Optional[ListNode]:

        temp = head

        while temp.next:
            value = gcd(temp.val, temp.next.val)

            holder = ListNode(val=value, next=temp.next)
            temp.next = holder

            # go to the new node
            temp = temp.next
            # go to the actual next node
            temp = temp.next

        return head
