package Problems;

class Sqrt {
    public int mySqrt(int x) {
        for (int i = 0; i < x; i++) {
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
        System.out.println(sol.mySqrt(0));
        System.out.println(sol.mySqrt(3));
        System.out.println(sol.mySqrt(4));
        System.out.println(sol.mySqrt(5));
        System.out.println(sol.mySqrt(16));
    }
}