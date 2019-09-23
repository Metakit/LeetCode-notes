class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        for (int i = 1; i < n; i++) {
            string s = "";
            int cnt = 0;
            char c = ans[0];
            for (int j = 0; j < ans.size(); j++) {
                if (ans[j] == c) cnt++;
                else {
                    s = s + to_string(cnt) + c;
                    cnt = 1;
                    c = ans[j];
                }
            }
            s = s + to_string(cnt) + c;
            ans = s;
        }
        return ans;
    }
};