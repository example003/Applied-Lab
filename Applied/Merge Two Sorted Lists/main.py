from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def mergeTwoLists(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode()
        tail = dummy

        while l1 and l2:
            if l1.val < l2.val:
                tail.next = l1
                l1 = l1.next
            else:
                tail.next = l2
                l2 = l2.next
            tail = tail.next

        if l1:
            tail.next = l1
        elif l2:
            tail.next = l2

        return dummy.next

# Function to create a linked list from a list of values
def createLinkedList(values):
    if not values:
        return None
    head = ListNode(values[0])
    current = head
    for val in values[1:]:
        current.next = ListNode(val)
        current = current.next
    return head

# Function to print the linked list
def printList(head):
    while head:
        print(head.val, end=" ")
        head = head.next
    print()

# Take user input for values of the two sorted linked lists
print("Enter values for the first sorted linked list (separated by space):")
values1 = list(map(int, input().split()))
print("Enter values for the second sorted linked list (separated by space):")
values2 = list(map(int, input().split()))

# Create linked lists from user input
l1 = createLinkedList(values1)
l2 = createLinkedList(values2)

# Create a Solution object
solution = Solution()

# Merge the two sorted lists
mergedList = solution.mergeTwoLists(l1, l2)

# Print the merged list
print("Merged List:", end=" ")
printList(mergedList)