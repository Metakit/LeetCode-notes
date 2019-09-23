class Solution {
public:
    int titleToNumber(string s) {
        int ans = 0;
        for (int i = s.size()-1, d = 1; i >= 0; i--, d *= 26)
            ans += (s[i] - 'A' + 1) * d;
        return ans;
    }
};