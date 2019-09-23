class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if (nums.size() == 0) return 0;
        int ans = 0;
        int sum = 0x3f3f3f3f;
        int len = nums.size();
        for (int i = 0; i < len; ++i) {
            for (int j = i+1; j < len; ++j) {
                for (int k = j+1; k < len; ++k) {
                    int part = abs(nums[i] + nums[j] + nums[k] - target);
                    if (part < sum)
                        sum = part, ans = nums[i] + nums[j] + nums[k];
                }
            }
        }
        return ans;
    }
};