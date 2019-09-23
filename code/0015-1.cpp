class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        if (nums.size() < 3) return ans;
        
        int len = nums.size();
        vector<int> past = {0x3f3f3f3f, 0x3f3f3f3f, 0x3f3f3f3f};
        sort(nums.begin(), nums.end());
        for (int i = 0; i < len; ++i) {
            if (i != 0 && nums[i-1] == nums[i]) continue;
            for (int j = i+1, k = len-1; j < k; ) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    vector<int> tmp = {nums[i], nums[j], nums[k]};
                    for (int m = 0; m < 3; ++m) {
                        if (tmp[m] != past[m]) {
                            ans.push_back(tmp);
                            past = tmp;
                            break;
                        }
                    }
                    k--;
                }
                if (sum > 0) k--;
                if (sum < 0) j++;
            }
        }
        return ans;
    }
};