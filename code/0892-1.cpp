class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int x = grid.size(), y = grid[0].size();
        int ans = 0;
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                if (grid[i][j] != 0) {
                    ans += 2 + 4 * grid[i][j];
                    if (i != 0) ans -= 2 * min(grid[i][j], grid[i-1][j]);
                    if (j != 0) ans -= 2 * min(grid[i][j], grid[i][j-1]);
                }
            }
        }
        return ans;
    }
};