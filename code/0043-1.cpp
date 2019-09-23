class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        string ans = "0", zero = "";
        for (int i = num2.size()-1; i >= 0; i--, zero += "0")
            ans = addPart(ans, (multiPart(num1, num2[i]) + zero));
        return ans;
    }
    string multiPart(string n1, char n2) {
        string ans;
        int c = 0;
        for (int i = n1.size()-1, d; i >= 0; i--) {
            d = (n1[i] - '0') * (n2 - '0') + c;
            c = d / 10;
            ans = to_string(d%10) + ans;
        }
        ans = c>0 ? to_string(c)+ans : ans;
        return ans;
    }
    string addPart(string n1, string n2) {
        string ans;
        int c = 0;
        for (int i = n1.size()-1, j = n2.size()-1, d; ; i--, j--) {
            if      (i<0  && j<0 && c==0) break;
            else if (i<0  && j<0 && c==1) d = c;
            else if (i>=0 && j<0)         d = n1[i] - '0' + c;
            else if (i<0  && j>=0)        d = n2[j] - '0' + c;
            else                          d = n1[i] - '0' + n2[j] - '0' + c;
            if (d >= 10) c = 1, d -= 10;
            else         c = 0;
            ans = to_string(d) + ans;
        }
        return ans;
    }
};