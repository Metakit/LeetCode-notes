class Solution {
public:
    bool isUgly(int num) {
        if (num <= 0) return false;
        while(true) {
            if (num % 5 == 0) num /= 5;
            else              break;
        }
        while(true) {
            if (num % 3 == 0) num /= 3;
            else              break;
        }
        while(true) {
            if (num % 2 == 0) num = num >> 1;
            else              break;
        }
        if (num == 1) return true;
        else          return false;
    }
};