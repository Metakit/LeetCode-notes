class Solution {
public:
    int climbStairs(int n) {
        int* dp = (int*)malloc((n+5) * sizeof(int));
        for (int i = 0; i <= n; i++) {
            if (i <= 1) dp[i] = 1;
            else        dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};