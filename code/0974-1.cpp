class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        int len = A.size();
        if (len == 0) return 0;
        
        int* sum = (int*)malloc((len+1) * sizeof(int));
        int ans = 0;
        sum[0] = (A[0] % K + K) % K;
        for (int i = 1; i <= len; ++i) sum[i] = ((sum[i-1]+A[i]) % K + K) % K;
        for (int i = 0; i < len; ++i)  sum[i] %= K;
        for (int i = 0; i < len; ++i) {
            for (int j = i; j < len; ++j) {
                if ((i == 0 && sum[j] == 0) || (i != 0 && sum[j] == sum[i-1])) {
                    ans++;
                }
            }
        }
        return ans;
    }
};