class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int len = nums.size();
        for (int i = len-1, j, tmp; i >= 0; i--) {
            if (i != len-1 && nums[i] < nums[i+1]) {
                for (j = i+1; j < len; j++) {
                    if ((j == len-1) ||
                        (j != len-1 && nums[j] > nums[i] && nums[j+1] <= nums[i])) {
                        tmp = nums[i], nums[i] = nums[j], nums[j] = tmp;
                        break;
                    }
                }
                reverse(nums, i+1, len);
                break;
            }
            if (i == 0 && nums[0] >= nums[1])
                reverse(nums, 0, len);
        }
    }
    void reverse(vector<int>& nums, int left, int right) {
        int tmp;
        for (int l = left, r = right-1; l < r; l++, r--)
            tmp = nums[l], nums[l] = nums[r], nums[r] = tmp;
    }
};