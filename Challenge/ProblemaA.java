package Challenge;

import java.util.Scanner;

public class ProblemaA {

    public void getCoins() {

    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int k = s.nextInt();
        int count = 0;
        while (n-- > 0) {
            int x = s.nextInt();
            if (x % k == 0)
                count++;
        }
        System.out.println(count);
        
    }
    
}
