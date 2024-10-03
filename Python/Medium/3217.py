# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def modifiedList(
        self, nums: List[int], head: Optional[ListNode]
    ) -> Optional[ListNode]:
        # use a set to store illegal numbers
        numbers = set(nums)

        dummy = ListNode(next=head)

        holder = dummy

        while holder.next != None:
            num = holder.next.val
            if num in numbers:
                holder.next = holder.next.next
            else:
                holder = holder.next

        return dummy.next
