class Solution {
public:
    int reverse(int x) {
        bool negative = x<0 ? true : false;
        int ans = 0;
        x = x!=-2147483648 ? abs(x) : 0;
        while(x != 0) {
            if (ans > 214748364
                || (ans == 214748364 && x%10 >= 7)
                ) return 0;
            ans = ans * 10 + x % 10;
            x = x / 10;
        }
        if (negative) ans = -ans;
        return ans;
    }
};