package Challenge;

import java.util.Arrays;
//import java.util.Scanner;

public class ProblemaA {

    public int getCoins(int n, int[] values) {
        //int nCoins = 0;
        Arrays.sort(values);

        int sum = 0;
        int sumCoins = 0;
        int count = 0;

        for (int i = 0; i < values.length; i++){
            sum += values[i];
        }

        do {
            count ++;
            sum = sum - values[values.length-count];
            sumCoins += values[values.length-count];
        } while (sum >= sumCoins);

        return count;
    }

    public static void main(String[] args) {
        ProblemaA sol = new ProblemaA();
        int[] arr = {1,2,3,4};
        System.out.println(sol.getCoins(4, arr));
        
        /*Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int k = s.nextInt();
        int count = 0;
        while (n-- > 0) {
            int x = s.nextInt();
            if (x % k == 0)
                count++;
                test this 
        }
        System.out.println(count);*/
    }
    
}
