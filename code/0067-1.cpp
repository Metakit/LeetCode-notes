class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        for (int i = a.size()-1, j = b.size()-1, d, cnt = 0; ; i--, j--) {
            if      (i >= 0 && j >= 0) d = a[i] + b[j] - 2*'0' + cnt;
            else if (i >= 0 && j <  0) d = a[i] - '0' + cnt;
            else if (i <  0 && j >= 0) d = b[j] - '0' + cnt;
            else {
                if (cnt != 0) ans = to_string(cnt) + ans;
                break;
            }
            cnt = 0;
            if (d > 1) cnt = 1, d -= 2;
            ans = to_string(d) + ans;
        }
        return ans;
    }
};