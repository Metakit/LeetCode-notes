class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int len = ops.size();
        if (m * n == 0) return 0;
        if (len == 0)   return m * n;
        int amin = m, bmin = n;
        for (int i = 0; i < len; i++) {
            if (amin > ops[i][0]) amin = ops[i][0];
            if (bmin > ops[i][1]) bmin = ops[i][1];
        }
        return amin * bmin;
    }
};