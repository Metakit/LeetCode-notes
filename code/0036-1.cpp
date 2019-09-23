class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if (board.size() == 0) return false;
        for (int i = 0; i < 9; i++) {
            int bucket[10] = {};
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                if (bucket[board[i][j] - '0'] != 0) return false;
                bucket[board[i][j] - '0']++;
            }
        }
        for (int j = 0; j < 9; j++) {
            int bucket[10] = {};
            for (int i = 0; i < 9; i++) {
                if (board[i][j] == '.') continue;
                if (bucket[board[i][j] - '0'] != 0) return false;
                bucket[board[i][j] - '0']++;
            }
        }
        int v[9][2] = {
            {0, 0}, {0, 3}, {0, 6},
            {3, 0}, {3, 3}, {3, 6},
            {6, 0}, {6, 3}, {6, 6}
        };
        for (int c = 0; c < 9; c++) {
            int bucket[10] = {};
            for (int i = v[c][0]; i < v[c][0]+3; i++) {
                for (int j = v[c][1]; j < v[c][1]+3; j++) {
                    if (board[i][j] == '.') continue;
                    if (bucket[board[i][j] - '0'] != 0) return false;
                    bucket[board[i][j] - '0']++;
                }
            }
        }
        return true;
    }
};