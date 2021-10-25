package Problems;

import java.util.Arrays;

public class MedianOfSortedArrays {
    public static double findMedianSortedArrays(int[] nums1, int[] nums2) {
        double median = 0;
        int[] array = new int[nums1.length + nums2.length];
        int index = 0;
        int indexNums2 = 0;

        for (int i = 0; i < nums1.length; i++) {
            array[i] = nums1[i];
            index = i + 1;
        }

        for (int j = index; j < array.length; j++) {
            array[j] = nums2[indexNums2];
            indexNums2++;
        }

        Arrays.sort(array);

        if (array.length % 2 != 0){
            median = array[(int) Math.floor(array.length/(double)2)];
        } else {
            median = (array[array.length/2] + array[(array.length/2)-1]) / (double)2;
        }
        return median;
    }

    public static void main(String[] args) {
        int[] num1 = {2};
        int[] num2 = {};
        System.out.println(findMedianSortedArrays(num1, num2));
    }
    
}
