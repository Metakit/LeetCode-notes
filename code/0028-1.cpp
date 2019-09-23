class Solution {
public:
    int strStr(string haystack, string needle) {
        string h = haystack, n = needle;
        int lenh = h.size(), lenn = n.size();
        if (n == "") return 0;
        if (h == "") return -1;
        for (int i = 0; i < lenh-lenn+1; i++) {
            for (int j = 0; j < lenn; j++) {
                if (h[i+j] != n[j]) break;
                if (j == lenn-1) return i;
            }
        }
        return -1;
    }
};