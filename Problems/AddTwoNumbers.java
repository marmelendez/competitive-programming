package Problems;

public class AddTwoNumbers {
    public class ListNode {
        int val;
        ListNode next;
        ListNode() {}
        ListNode(int val) { this.val = val; }
        ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }

    public void add(ListNode l1, ListNode l2) {
        int num1 = getReverse(l1);
        int num2 = getReverse(l2);

        String sumStr = String.valueOf(num1 + num2);
        String revSum = "";

        for (int i = sumStr.length() - 1; i >= 0; i--) {
            revSum += sumStr.charAt(i);
        }
        
        //return revSum;
    }

    private int getReverse(ListNode list) {
        String number = "";
        String reverseNum = "";

        while (list.next != null) {
            number += list.val;
        }

        for (int i = number.length() - 1; i >= 0; i--) {
            reverseNum += number.charAt(i);
        }

        return Integer.parseInt(reverseNum);  
    }
}
