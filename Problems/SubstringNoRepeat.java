package Problems;

import java.util.Collections;
import java.util.Vector;

public class  SubstringNoRepeat {
    public int lengthOfLongestSubstring(String s) {
        String sub = "";
        Vector<Integer> lenVec = new Vector<>();

        if (s.length() > 0) {
            for (int i = 0; i<s.length(); i++) {
                sub += s.charAt(i);
                lenVec.add(getSubstring(sub,s,i));
                sub = "";
            }
        } else {
            return 0;
        }

        return Collections.max(lenVec);
    }

    private int getSubstring(String sub, String s, int index) {
        for (int i = index + 1; i < s.length(); i++) {
            if (!isInSubstring(sub,s,i) && isSubstring(sub,s)){ //no esta en sub
                sub += s.charAt(i);
                System.out.println(sub);
            } else {
                break;
            }
        }
        return sub.length();
    }

    private boolean isSubstring(String sub, String s) {
        return s.contains(sub);
    }

    private boolean isInSubstring(String sub, String s, int i) {
        return sub.contains(Character.toString(s.charAt(i)));
    }

    public static void main(String[] args) {
        String s = "pwwkew";
        SubstringNoRepeat sub = new SubstringNoRepeat();
        System.out.println(sub.lengthOfLongestSubstring(s));
    }
}
