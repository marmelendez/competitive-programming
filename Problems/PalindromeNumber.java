package Problems;

public class PalindromeNumber {
    public static boolean isPalindrome(int x) {
        String xStr = String.valueOf(x);
        int startIndex = 0;
        for (int i = xStr.length() -1 ; i >= 0; i--) {
            if (xStr.charAt(startIndex) == xStr.charAt(i)) {
                startIndex ++;
            } else {
                return false;
            }
        }
        return true;
    }   

    public static void main(String[] args) {
        int x = 121;
        System.out.println(isPalindrome(x));
    }
}
