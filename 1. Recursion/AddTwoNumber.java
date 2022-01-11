public class AddTwoNumber {
    private int carry = 0;
    private class ListNode {
        int val;
        ListNode next;
        public ListNode() {}
    }
    public ListNode addTwoNumber(ListNode l1, ListNode l2){
        if(l1 == null && l2 == null && carry == 0)  return null;
        int t1, t2;
        ListNode m1, m2;
        if(l1 == null) {
            t1 = 0;
            m1 = null;
        }
        else {
            t1 = l1.val;
            m1 = l1.next;
        }

        if(l2 == null) {
            t2 = 0;
            m2 = null;
        }
        else {
            t2 = l2.val;
            m2 = l2.next;
        }

        ListNode result = new ListNode();

        int t = t1 + t2 + carry;
        if(carry == 1)  carry = 0;
        if(t > 9) {
            result.val = t - 10;
            carry = 1;
        }
        else    result.val = t;
        result.next = addTwoNumber(m1, m2);
        return result;
    }
}