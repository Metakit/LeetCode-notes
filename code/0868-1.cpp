class Solution {
public:
    int binaryGap(int N) {
        int cntMax = 0;
        for (int i = 0, cnt = -99; i < 32; i++, cnt++) {
            if (N & 1 == 1) cntMax = cntMax<cnt ? cnt : cntMax, cnt = 0;
            N = N >> 1;
        }
        return cntMax;
    }
};