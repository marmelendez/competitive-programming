package Problems;
import java.util.Arrays;
import java.util.Collections;
import java.util.Vector;

class Solution {
    public int longestConsecutive(int[] nums) {
        Arrays.sort(nums);
        int length = removeDuplicate(nums);
        var responses = new Vector<Integer>();
        int count = 1;

        if (nums.length == 0) {
            return 0;
        }

        for (int i = 0; i < length -1; i++) {
            if (nums[i+1] == nums[i] + 1) {
                count ++;
            } else {
                responses.add(count);
                count = 1;
            }
        }
        responses.add(count);
        
        Collections.sort(responses);
        return responses.get(responses.size() - 1);   
    }

    private int removeDuplicate(int arr[]){   //from GeeksforGeeks
        int n = arr.length;
        if (n==0 || n==1){  
            return n;  
        }    
        int j = 0;

        for (int i=0; i < n-1; i++){  
            if (arr[i] != arr[i+1]){  
                arr[j++] = arr[i];  
            }  
        }  
        arr[j++] = arr[n-1];  
        return j;  //return the length of the array without duplicates
    }  

    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] nums = {1,2,0,1}; //0, 1, 1, 2 - 3
        int[] nums2 = {0,3,7,2,5,8,4,6,0,1}; //9
        System.out.println(sol.longestConsecutive(nums));
        System.out.println(sol.longestConsecutive(nums2));
    }
}