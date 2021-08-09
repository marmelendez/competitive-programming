package Problems;

public class ReverseInt {
    public int reverse(int x) {
        String xStr = String.valueOf(x);
        String resStr = "";
        int res;
        for (int i = xStr.length() ; i >= 0; i--) {
            resStr += xStr.charAt(i);
        }

        res = Integer.valueOf(resStr);

        return res;        
    }
}
