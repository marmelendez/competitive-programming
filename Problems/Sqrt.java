package Problems;

class Sqrt {
    public int mySqrt(int x) {
        for (int i = (int) Math.ceil(x/2F); i >= 0; i--) {
            if (i * i == x) {
                return i;
            }
            if (i * i > x) {
                return i-1;
            }
        }

        return -1;
    }

    public static void main(String[] args) {
        Sqrt sol = new Sqrt();
        System.out.println(sol.mySqrt(2147483647));
        System.out.println(sol.mySqrt(1));
        System.out.println(sol.mySqrt(0));
        System.out.println(sol.mySqrt(4));
        System.out.println(sol.mySqrt(5));
        System.out.println(sol.mySqrt(16));
    }
}