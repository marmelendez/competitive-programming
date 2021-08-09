package Problems;

public class ReverseInt {
    public static int reverse(int x) {
        String xStr = String.valueOf(x);
        String resStr = "";
        int res;
        for (int i = xStr.length() - 1; i >= 0; i--) {
            if(i == 0) {
                if(xStr.charAt(i) == '-'){
                    resStr = xStr.charAt(i) + resStr;
                } else if(xStr.charAt(i) != '0') {
                    resStr += xStr.charAt(i);
                } else if (xStr.length() == 1) {
                    resStr += xStr.charAt(i);
                }
            } else {
                resStr += xStr.charAt(i);
            }
        }

        res = Integer.parseInt(resStr);

        return res;        
    }

    public static int alternativeSolution(int x) {
        int rev = 0;
        while(x != 0) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x /= 10;
            System.out.println(rev);
        }
        return rev;
    }

    public static void main(String[] args) {
        int x = -123;
        System.out.println(alternativeSolution(x));
    }
}
