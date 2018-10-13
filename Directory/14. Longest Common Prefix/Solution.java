方法１：

import java.util.HashMap;

public class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs.length == 0)
            return "";
        String prefix = strs[0];
        for (int i = 1; i < strs.length; i++) {
            while (strs[i].indexOf(prefix) != 0) {
                prefix = prefix.substring(0, prefix.length() - 1);
            }
        }
        return prefix;
    }

    public static void main(String[] args) {
        String strs[] = { "flower", "flow", "flight" };
        String reString = new Solution().longestCommonPrefix(strs);
        System.out.println(reString);
    }
}



方法２：
import java.util.Arrays;
import java.util.HashMap;

public class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs.length == 0)
            return "";
        Arrays.sort(strs);
        StringBuffer reStringBuffer = new StringBuffer();
        char[] a = strs[0].toCharArray();
        char[] b = strs[strs.length - 1].toCharArray();
        for (int i = 0; i < a.length; i++) {
            if (b.length > i && b[i] == a[i]) {
                reStringBuffer.append(b[i]);
            } else {
                break;
            }
        }
        return reStringBuffer.toString();
    }

    public static void main(String[] args) {
        String strs[] = { "flower", "flow", "flight" };
        String reString = new Solution().longestCommonPrefix(strs);
        System.out.println(reString);
    }
}


