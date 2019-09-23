class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans;
        int c = 0;
        for (int i = num1.size()-1, j = num2.size()-1, d; ; i--, j--) {
            if      (i<0  && j<0 && c==0) break;
            else if (i<0  && j<0 && c==1) d = c;
            else if (i>=0 && j<0)         d = num1[i] - '0' + c;
            else if (i<0  && j>=0)        d = num2[j] - '0' + c;
            else                          d = num1[i] - '0' + num2[j] - '0' + c;
            if (d >= 10) c = 1, d -= 10;
            else         c = 0;
            ans = to_string(d) + ans;
        }
        return ans;
    }
};