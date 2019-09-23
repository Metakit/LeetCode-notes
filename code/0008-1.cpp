class Solution {
public:
    int myAtoi(string str) {
        int len = str.size();
        if (len == 0) return 0;
        
        int ans = 0;
        int s = 1; // s = status.
        bool neg = false; // neg = negative;
        for (int i = 0; i < len; ++i) { 
            if     (s == 1) {
                if      (str[i] == ' ')                  ;
                else if (str[i] == '+')                  s = 2;
                else if (str[i] == '-')                  s = 2, neg = true;
                else if ('0' <= str[i] && str[i] <= '9') s = 3, ans = str[i] - '0';
                else                                     return 0;
            }
            else if (s == 2) {
                if ('0' <= str[i] && str[i] <= '9')      s = 3, ans = str[i] - '0';
                else                                     return 0;
            }
            else if (s == 3) {
                if ('0' <= str[i] && str[i] <= '9') {
                    if      (ans > 214748364) {
                        if (!neg) return INT_MAX;
                        if (neg)  return INT_MIN;
                    }
                    else if (ans == 214748364){
                        if (!neg && str[i] >= '8') return INT_MAX;
                        if (neg && str[i] >= '9')  return INT_MIN;
                        ans = ans * 10 + str[i] - '0';
                    }
                    else
                        ans = ans * 10 + str[i] - '0';
                }
                else break;
            }
            else;
        }
        return neg ? -ans : ans;
    }
};