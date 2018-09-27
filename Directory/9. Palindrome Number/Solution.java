import java.util.HashMap;

public class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int reveNum = 0;
        int tmp = x;
        while (x != 0) {
            reveNum = reveNum * 10 + x % 10;
            x /= 10;
        }
        return tmp == reveNum;
    }

    public static void main(String[] args) {
        int x = 121;
        boolean res = new Solution().isPalindrome(x);
        System.out.println(res);
    }
}


