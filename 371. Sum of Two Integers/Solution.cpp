class Solution {
public:
    int getSum(int a, int b) {
        return b?getSum(a^b, (a&b)<<1):a;
    }
};

class Solution {
public:
    int getSum(int a, int b) {
        int sum=0;
        while(b){
            sum=(a^b);///当前位模2求和
            b=(a&b)<<1;///进位
            a=sum;
        }
        return sum;
    }
};
