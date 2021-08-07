package Problems;

public class RemoveElements {
    public int removeElement(int[] nums, int val) {
        int k = 0;
        int index = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != val) {
                nums[index] = nums[i];
                index ++;
                //agregar a nums
            }
        }

        return k;
    }
    
}
