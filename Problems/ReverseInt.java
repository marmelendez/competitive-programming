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
                }
            } else {
                resStr += xStr.charAt(i);
            }
            //check when is 0 or -
        }

        res = Integer.valueOf(resStr);

        return res;        
    }

    public static void main(String[] args) {
        int x = -123;
        System.out.println(reverse(x));
    }
}
