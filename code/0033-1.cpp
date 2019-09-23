class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        if (len == 0) return -1;
        for (int l = 0, r = len-1, m = (r-l)/2+l; l <= r; m = (r-l)/2+l) {
            if (nums[m] == target)  return m;
            if (nums[l] <= nums[r]) return search(nums, target, l, r);
            if      (nums[m] >= nums[l]) {
                if (nums[l] <= target && target < nums[m])
                    return search(nums, target, l, m-1);
                else
                    l = m+1;
            }
            else if (nums[m] <= nums[r]) {
                if (nums[m] < target && target <= nums[r])
                    return search(nums, target, m+1, r);
                else
                    r = m-1;
            }
            else;
        }
        return -1;
    }
    int search(vector<int>& nums, int target, int left, int right) {
        for (int l = left, r = right, m = (r-l)/2+l; l <= r; m = (r-l)/2+l) {
                if      (nums[m] == target) return m;
                else if (nums[m] >  target) r = m-1;
                else                        l = m+1;
        }
        return -1;
    }
};