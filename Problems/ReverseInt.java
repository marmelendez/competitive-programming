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
        Long res = Long.valueOf(0);
        while(x != 0) {
            int digit = x % 10;
            res = res * 10 + digit;
            x /= 10;
            System.out.println(res);
        }
        if (res < Math.pow(-2, 31) || res > Math.pow(2, 31) - 1) {
            return 0;
        } 
        return res.intValue();
    }


    public static void main(String[] args) {
        int x = 1534236469;
        System.out.println(alternativeSolution(x));
    }
}
