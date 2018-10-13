import java.util.Stack;

public class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<Character>();
        for (char ch : s.toCharArray()) {
            if (ch == '(') {
                stack.push(')');
            } else if (ch == '[') {
                stack.push(']');
            } else if (ch == '{') {
                stack.push('}');
            } else if (stack.empty() || stack.pop() != ch) {///栈为空或者栈顶不等于ch
                return false;
            }
        }
        return stack.empty();
    }

    public static void main(String[] args) {
        String str = "" + "()";
        boolean res = new Solution().isValid(str);
        System.out.println(res);
    }
}


