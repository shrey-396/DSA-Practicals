class Solution {
    public ListNode swapPairs(ListNode head) {
        ListNode n = helper(head);
        return n; 
    }
    
    public ListNode helper(ListNode head) {
        if (head == null || head.next == null) {
            return head;
        }    
        
        ListNode tmp = head;
        ListNode next = head.next;
        
        head.next = next.next;
        next.next = tmp; 
        head.next = helper(head.next); 
        return next;
    }
}