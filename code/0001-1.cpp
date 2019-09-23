class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        if (nums.size() < 2) return ans;
        for (int i = 0; i < nums.size()-1; ++i) {
            for (int j = i+1; j < nums.size(); ++j) {
                if (nums[j] == target - nums[i]) {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};