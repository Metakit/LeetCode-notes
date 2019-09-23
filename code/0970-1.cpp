class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<int> ans;
        int num[1000005];
        int z;
        for (int i = 0; i < 1000005; ++i) num[i] = 0;
        for (int i = 1; i <= bound; i *= x) {
            for (int j = 1; j <= bound; j *= y) {
                z = i + j;
                if (z > bound) break;
                else           num[z] = 1;
                if (y == 1) break;
            }
            if (x == 1) break;
        }
        for (int i = 0; i < 1000005; i++)
            if (num[i] != 0) ans.push_back(i);
        return ans;
    }
};