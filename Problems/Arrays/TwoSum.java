package Problems;

public class TwoSum {
    public static int[] twoSum(int[] nums, int target) {
        int[] index = new int[2];
        for (int i = 0; i < nums.length; i++){
            for (int j = i + 1; j < nums.length; j++){
                if (nums[i] + nums[j] == target) {
                    index[0] = i;
                    index[1] = j;
                }

            }
        }
        return index;
    }
    public static void main(String[] args) {
        int[] nums = {3,3};
        int target = 6;
        int[] resp = twoSum(nums,target);
        for (int i = 0; i < resp.length; i++){
            System.out.println(resp[i]);
        }
    }
    
}
