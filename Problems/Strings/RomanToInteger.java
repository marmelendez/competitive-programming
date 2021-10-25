package Problems;

public class RomanToInteger {
    public int romanToInt(String s) {
        int num = 0;
        for (int i = 0; i < s.length(); i++) {
            switch(s.charAt(i)) {
                case 'I':   num += beforeCases('V', 'X', i, s, 1);
                            break;
                case 'V':   num+= 5;
                            break;
                case 'X':   num += beforeCases('L', 'C', i, s, 10);
                            break;
                case 'L':   num+= 50;
                            break;
                case 'C':   num += beforeCases('D', 'M', i, s, 100);
                            break;
                case 'D':   num+= 500;
                            break;
                case 'M':   num+= 1000;
                            break;
                default:    num += 0;
            }
        }
        return num; 
    }

    private int beforeCases(char ch1, char ch2, int i, String s, int value) {
        try{
            if (s.charAt(i+1) == ch1 || s.charAt(i+1) == ch2) {
                return -value;
            } else {
                return value;
            }
        } catch (Exception e) {
            return value;
        }
    }

    public static void main(String[] args) {
        RomanToInteger r2i = new RomanToInteger();
        String s = "MCMXCIV";
        System.out.println(r2i.romanToInt(s));
    }
    
}
