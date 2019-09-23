class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        int len = points.size();
        vector<vector<int>> ans;
        sort(points.begin(), points.end(), cmp);
        for (int i = 0; i < K && i < len; i++) {
            ans.push_back(points[i]);
        }
        return ans;
    }
    static bool cmp(const vector<int>& x, const vector<int>& y) {
        return (x[0] * x[0] + x[1] * x[1]) < (y[0] * y[0] + y[1] * y[1]);
    }
};