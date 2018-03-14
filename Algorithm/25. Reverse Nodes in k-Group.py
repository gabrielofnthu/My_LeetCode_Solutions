# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def reverseKGroup(self, head, k):
        """
        :type head: ListNode
        :type k: int
        :rtype: ListNode
        """
        if head == None:
            return head;
    
        oulist = [];
        oulist.append(head.val);
        
		while head.next != None:
                head = head.next;
                oulist.append(head.val);    
        
        times = len(oulist) / k;
        bigPointer = k-1;
        smallPointer = bigPointer;
        firstNode = ListNode(1);
        oulinklist = firstNode;
        
        for i in range(1,times+1):
            for j in range(1,k+1):
                oulinklist.next = ListNode(oulist[smallPointer]);
                oulinklist = oulinklist.next;
                smallPointer = smallPointer - 1;
            bigPointer = bigPointer + k;
            smallPointer = bigPointer;
        
        remain = len(oulist) - k * times;
        
        for i in range(1, remain+1):
            oulinklist.next = ListNode(oulist[k * times + i - 1]);
            oulinklist = oulinklist.next;
            
        oulinklist.next = None;
        return firstNode.next;
        