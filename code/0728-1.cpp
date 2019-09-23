class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        if (left > right) return {};
        for (int i = left, n, digit; i <= right; i++) {
            n = i;
            while(n != 0) {
                digit = n % 10;
                if (digit == 0 || i % digit != 0) break;
                n /= 10;
            }
            if (n == 0) ans.push_back(i);
        }
        return ans;
    }
};