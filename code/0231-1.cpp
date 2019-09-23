class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        bool single_1 = false;
        for (int i = 0; i < 32; i++) {
            if      (n & 1 == true && single_1 == false) single_1 = true;
            else if (n & 1 == true && single_1 == true)  return false;
            else;
            n = n >> 1;
        }
        return true;
    }
};