class Solution {
public:
    int divide(int dividend, int divisor) {
        int a = dividend, b = divisor;
        if (a == -2147483648 && b == -1) return INT_MAX;
        return a/b;
    }
};