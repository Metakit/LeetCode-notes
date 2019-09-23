class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        if (nums.size() == 0) return ans;
        
        int len = nums.size();
        vector<int> former = {0x3f3f3f, 0x3f3f3f, 0x3f3f3f, 0x3f3f3f};
        sort(nums.begin(), nums.end());
        for (int i = 0; i < len; i++) {
            if (i != 0 && nums[i-1] == nums[i]) continue;
            for (int j = i+1; j < len; j++) {
                if (j != i+1 && nums[j-1] == nums[j]) continue;
                for (int l = j+1, r = len-1; l < r; ) {
                    int part = nums[i] + nums[j] + nums[l] + nums[r];
                    if (part == target) {
                        vector<int> tmp = {nums[i], nums[j], nums[l], nums[r]};
                        
                        for (int m = 0; m < 4; m++) {
                            if (former[m] != tmp[m]) {
                                ans.push_back(tmp);
                                former = tmp;
                                break;
                            }
                        }
                        r--;
                    }
                    if (part > target) r--;
                    if (part < target) l++;
                }
            }
        }
        return ans;
    }
};