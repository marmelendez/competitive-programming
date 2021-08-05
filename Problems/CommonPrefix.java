package Problems;

public class CommonPrefix {
    public static String longestCommonPrefix(String[] strs) {
        String start = strs[0];
        String prefix = strs[0];
        
        for (int i = 1; i < strs.length; i++) {
            String newPrefix = "";
            for (int j = 0; j < strs[i].length(); j++) {
                if (start.charAt(j) == strs[i].charAt(j)) {
                    newPrefix += start.charAt(j);
                } else {
                    break;
                }
            }
            if (newPrefix.length() < prefix.length()) {
                prefix = newPrefix;
            }
        }
        return prefix;
    }

    public static void main(String[] args) {
        String[] strs = {"flower","flight","flow"};
        System.out.println(longestCommonPrefix(strs)); 
    }

}