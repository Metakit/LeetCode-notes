class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        stack<int> s;
        int len = 0, y = x;
        while(y != 0) {
            y /= 10;
            len++;
        }
        for (int i = 0; i < len/2; ++i) s.push(x%10), x /= 10;
        if (len & 1 == 1) x /= 10;
        for (int i = (len+1)/2; i < len; ++i) {
            if (s.top() != x%10) return false;
            s.pop();
            x /= 10;
        }
        return true;
    }
};