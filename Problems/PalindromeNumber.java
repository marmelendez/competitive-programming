package Problems;

public class PalindromeNumber {
    public boolean isPalindrome(int x) {
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


    
}
