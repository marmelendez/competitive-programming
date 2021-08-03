package Problems;

public class  SubstringNoRepeat {
    public static int lengthOfLongestSubstring(String s) {
        String sub = "";

        for (int i = 0; i < s.length(); i++) {
            if (!sub.contains(Character.toString(s.charAt(i)))){ //no esta en sub
                sub += s.charAt(i);
            }
        }

        return sub.length();
    }

    public static void main(String[] args) {
        String s = "pwwkew";
        System.out.println(lengthOfLongestSubstring(s));
    }
}
