package Problems;

public class CommonPrefix {
    public String longestCommonPrefix(String[] strs) {
        String start = strs[0];
        String prefix = strs[0];
        
        for (int i = 1; i < strs.length; i++) {
            String newPrefix = "";
            for (int j = 0; j < strs[i].length(); j++) {
                try {
                    if (start.charAt(j) == strs[i].charAt(j)) {
                        newPrefix += start.charAt(j);
                    } else {
                        break;
                    }
                } catch(Exception e) {
                    break;
                }
            }
            if (newPrefix.length() < prefix.length()) {
                prefix = newPrefix;
            }
        }
        return prefix;
    }

    public String alternativeSolution(String[] strs) {
        String ans = strs[0];
        
        if(strs.length==0)
            return "";
        
        for(int i=0;i<strs.length; i++){ //recorre las palabras
            while(strs[i].indexOf(ans)!=0){ //si la palabra en 1 contiene ans == 0, si no:
                ans = ans.substring(0, ans.length() -1 );
                System.out.println(ans);
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        String[] strs = {"flow","flower","flight"};
        CommonPrefix problem = new CommonPrefix();
        System.out.println(problem.alternativeSolution(strs)); 

    }
}