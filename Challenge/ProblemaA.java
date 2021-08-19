package Challenge;

import java.io.IOException;
import java.util.Arrays;

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
    }
    
}
