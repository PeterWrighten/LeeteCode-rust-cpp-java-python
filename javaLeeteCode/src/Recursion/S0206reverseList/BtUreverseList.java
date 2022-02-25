package Recursion.S0206reverseList;

class Solution {
    class Node
    {
        int data;
        Node next;
    }
    private Node first = null;
    public Node reverse(Node head) {
        Node curr = head;
        Node pre = null;
        while(curr != null) {
            Node next = curr.next;
            curr.next = pre;
            pre = curr;
            curr = next;
        }
        return pre;
    }
}
