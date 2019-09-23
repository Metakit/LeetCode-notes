class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int ans = 0;
        if (J.size() == 0 || S.size() == 0) return 0;
        for (int i = 0; i < J.size(); ++i) {
            for (int j = 0; j < S.size(); ++j) {
                if (J[i] == S[j])
                    ans++;
            }
        }
        return ans;
    }
};