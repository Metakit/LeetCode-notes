class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0, mi = 0x7fffffff, len = nums.size();
        for (int i = 0; i < len; i++) {
            sum += nums[i];
            if (nums[i] < mi) mi = nums[i];
        }
        return sum - mi * len;
    }
};