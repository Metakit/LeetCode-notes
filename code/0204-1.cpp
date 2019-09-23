class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        int ans = 0;
        int now = 1;
        bool flag = true;
        int notPrime[2580000] = {};
        while(flag) {
            for (int i = now+1; i < n; i++) {
                if (i == n-1) flag = false;
                if (notPrime[i] == 0) {
                    now = i;
                    break;
                }
            }
            for (int i = 2*now; i < n; i += now) {
                if (notPrime[i] == 0) notPrime[i] = 1;
            }
        }
        for (int i = 2; i < n; i++) {
            if (notPrime[i] == 0) ans++;
        }
        return ans;
    }
};