class Solution {
public:
    int reverse(int x) {
        bool flag = 0;
        if(x<0) {
            x = -x;
            flag = 1;
        }
        long long ans = 0;
        while(x) {
            ans = ans * 10 + x % 10;
            x /= 10;
        }
        if(flag) {
            ans = -ans;
        }
        if(ans < -(1LL<<31) || ans > (1LL<<31)-1) {
            return 0;
        }
        return ans;
    }
};


