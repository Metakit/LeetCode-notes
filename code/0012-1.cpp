class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        string part = "";
        string digit[4][10] = {
            {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
            {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
            {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
            {"", "M", "MM", "MMM"}
        };
        int tmp = num, len = 0;
        while(tmp != 0) tmp /= 10, len++;
        for (int i = 0; i < len; ++i) {
            ans = digit[i][num%10] + ans;
            num /= 10;
        }
        return ans;
    }
};