import java.util.HashMap;

public class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> hashMap = new HashMap<Integer, Integer>();
        int[] res = new int[2];
        for (int i = 0; i < nums.length; i++) {
            if (hashMap.get(target - nums[i]) == null) {
                hashMap.put(nums[i], i);
            } else {
                res[0] = hashMap.get(target - nums[i]);
                res[1] = i;
                break;
            }
        }
        return res;
    }

    public static void main(String[] args) {
        int[] nums = { 2, 7, 11, 15 };
        int target = 9;
        int[] res = new Solution().twoSum(nums, target);
        System.out.println(res[0] + " " + res[1]);
    }
}


