class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int len = nums.size();
        vector<int> ans = {-1, -1};
        if (len == 0) return ans;
        for (int l = 0, r = len-1, m = (r-l)/2+l; l <= r; m = (r-l)/2+l) {
            if      (nums[m] == target) {
                if (m == 0 || nums[m-1] != target) {
                    ans[0] = m;
                    break;
                }
                else r = m-1;
            }
            else if (nums[m] < target) l = m+1;
            else                       r = m-1;
        }
        for (int l = 0, r = len-1, m = (r-l)/2+l; l <= r; m = (r-l)/2+l) {
            if      (nums[m] == target) {
                if (m == len-1 || nums[m+1] != target) {
                    ans[1] = m;
                    break;
                }
                else l = m+1;
            }
            else if (nums[m] < target) l = m+1;
            else                       r = m-1;
        }
        return ans;
    }
};