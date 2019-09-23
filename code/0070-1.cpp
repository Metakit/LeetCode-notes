class Solution {
public:
    int climbStairs(int n) {
        return solve(n);
    }
    int solve(int i) {
        if (i <= 1) return 1;
        else        return solve(i-1) + solve(i-2);
    }
};