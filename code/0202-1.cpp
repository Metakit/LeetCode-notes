class Solution {
public:
    bool isHappy(int n) {
        while(n != 4 && n != 1) {
            int now = n, nextN = 0;
            while(now != 0) {
                nextN += (now%10) * (now%10);
                now /= 10;
            }
            n = nextN;
        }
        if (n == 1) return true;
        else        return false;
    }
};