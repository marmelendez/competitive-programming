package Challenge;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
//import java.util.Scanner;
import java.util.StringTokenizer;

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

    public static void main(String[] args) throws NumberFormatException, IOException {
        ProblemaA sol = new ProblemaA();
        int[] arr = {3,3};
        System.out.println(sol.getCoins(2, arr));
       /* BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter n: "); 
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        System.out.print("Enter k: "); 
        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());
        int count = 0;
        while (n-- > 0) {
            int x = Integer.parseInt(br.readLine());
            if (x % k == 0)
                count++;
        }
        System.out.println(count);
        
        Scanner s = new Scanner(System.in);
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
