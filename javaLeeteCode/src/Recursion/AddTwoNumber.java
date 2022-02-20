public class AddTwoNumber {
    private int carry = 0;
    private class ListNode {
        int val;
        ListNode next;
        public ListNode() {}
    }
    public ListNode addTwoNumber(ListNode l1, ListNode l2){
        if(l1 == null && l2 == null && carry == 0)  return null;
        int t1 = l1 == null ? 0: l1.val;
        int t2 = l2 == null ? 0: l2.val;
        ListNode m1 = l1 == null ? null: l1.next;
        ListNode m2 = l2 == null ? null: l2.next;


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