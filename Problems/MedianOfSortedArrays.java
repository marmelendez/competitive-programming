package Problems;

import java.util.Arrays;

public class MedianOfSortedArrays {
    public static double findMedianSortedArrays(int[] nums1, int[] nums2) {
        double median = 0;
        //Arrays.sort(nums1);
        //Arrays.sort(nums2);
        int[] array = new int[nums1.length + nums2.length];
        int index = 0;

        for (int i = 0; i < nums1.length; i++) {
            array[i] = nums1[i];
            index = i + 1;
        }

        int nums2Ind = 0;
        for (int j = index; j < array.length; j++) {
            array[j] = nums2[nums2Ind];
            nums2Ind++;
        }

        Arrays.sort(array);
        for (int j = 0; j < array.length; j++) {
            System.out.println(array[j]);
        }
        return median;
    }

    public static void main(String[] args) {
        int[] num1 = {};
        int[] num2 = {3};
        findMedianSortedArrays(num1, num2);
    }
    
}
