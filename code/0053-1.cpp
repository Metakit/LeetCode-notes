class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int* sum = (int*)malloc(nums.size() * sizeof(int));
        int ans = nums[0];
        sum[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            sum[i] = max(sum[i-1] + nums[i], nums[i]);
            if (sum[i] > ans) ans = sum[i];
        }
        return ans;
    }
};