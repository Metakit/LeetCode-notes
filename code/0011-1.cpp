class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxV = 0;
        int len = height.size();
        for (int i = 0; i < len; ++i) {
            for (int j = i; j < len; ++j) {
                maxV = max(maxV, min(height[i], height[j]) * (j - i));
            }
        }
        return maxV;
    }
};