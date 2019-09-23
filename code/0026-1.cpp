class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0, len = nums.size();
        if (len == 0) return 0;
        for (int i = 0; i < len; i++) {
            if (nums[i] > nums[j]) {
                j++;
                nums[j] = nums[i];
            }
        }
        return j+1;
    }
};