class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int x = grid.size(), y = grid[0].size();
        int xMax = 0, yMax = 0;
        int ans = 0;
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                if (grid[i][j] != 0)   ans++;
                if (grid[i][j] > xMax) xMax = grid[i][j];
            }
            ans += xMax;
            xMax = 0;
        }
        for (int j = 0; j < y; j++) {
            for (int i = 0; i < x; i++) 
                if (grid[i][j] > yMax) yMax = grid[i][j];
            ans += yMax;
            yMax = 0;
        }
        return ans;
    }
};