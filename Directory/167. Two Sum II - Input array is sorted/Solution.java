方法１
import java.util.HashMap;

public class Solution {
    public int[] twoSum(int[] numbers, int target) {
        HashMap<Integer, Integer> hashMap = new HashMap<Integer, Integer>();
        int[] res = new int[2];
        for (int i = 0; i < numbers.length; i++) {
            if (hashMap.get(target - numbers[i]) == null) {
                hashMap.put(numbers[i], i + 1);
            } else {
                res[0] = hashMap.get(target - numbers[i]);
                res[1] = i + 1;
                break;
            }
        }
        return res;
    }

    public static void main(String[] args) {
        int[] numbers = { 2, 7, 11, 15 };
        int target = 9;
        int[] res = new Solution().twoSum(numbers, target);
        System.out.println(res[0] + " " + res[1]);
    }
}


方法２
import java.util.HashMap;

public class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int l = 0, r = numbers.length - 1;
        int[] res = new int[2];
        while (l < r) {
            int sum = numbers[l] + numbers[r];
            if (sum > target)
                r--;
            else if (sum < target)
                l++;
            else {
                res[0] = l + 1;
                res[1] = r + 1;
                break;
            }
        }
        return res;
    }

    public static void main(String[] args) {
        int[] numbers = { 2, 7, 11, 15 };
        int target = 9;
        int[] res = new Solution().twoSum(numbers, target);
        System.out.println(res[0] + " " + res[1]);
    }
}


