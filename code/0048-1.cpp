class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        if (matrix.size() == 0) return;
        int len = matrix[0].size();
        int tmp;
        for (int c = 0; c < len/2; c++) {
            for (int i = 0; i < len-1-2*c; i++) {
                tmp = matrix[c][c+i];
                matrix[c][c+i] = matrix[len-1-c-i][c];
                matrix[len-1-c-i][c] = matrix[len-1-c][len-1-c-i];
                matrix[len-1-c][len-1-c-i] = matrix[c+i][len-1-c];
                matrix[c+i][len-1-c] = tmp;
            }
        }
    }
};