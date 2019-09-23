class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        if (n <= 0) return ans;
        
        int bound = 1;
        for (int i = 0; i < n*2; i++) bound *= 2;
        for (int i = 0; i < bound; i++) {
            int digit = i, cnt = 0;
            for(int j = 0; j < n*2; j++) {
                if (digit & 1 == 1) cnt--;
                else                cnt++;
                if (cnt < 0 || cnt > n) break;
                digit = digit >> 1;
            }
            if (cnt == 0) {
                string part = "";
                int digit = i;
                for(int k = 0; k < n*2; k++) {
                    if (digit & 1 == 1) part = part + ')';
                    else                part = part + '(';
                    digit = digit >> 1;
                }
                ans.push_back(part);
            }
        }
        return ans;
    }
};