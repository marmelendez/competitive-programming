package Problems;

public class ReverseInt {
    public static int reverse(int x) {
        String xStr = String.valueOf(x);
        String resStr = "";
        int res;
        for (int i = xStr.length() - 1; i >= 0; i--) {
            resStr += xStr.charAt(i);
        }

        res = Integer.valueOf(resStr);

        return res;        
    }

    public static void main(String[] args) {
        int x = 123;
        System.out.println(reverse(x));
    }
}
