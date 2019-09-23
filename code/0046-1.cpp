class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if (nums.size() == 0) return {{}};
        vector<vector<int>> ans;
        vector<int> part;
        int bucket[nums.size()] = {};
        dfs(ans, nums, part, bucket, 0);
        return ans;
    }
    void dfs(vector<vector<int>> &ans, vector<int>& nums, vector<int> part, 
            int bucket[], int i) {
        if (i == nums.size())
            ans.push_back(part);
        else {
            for (int j = 0; j < nums.size(); j++) {
                if (bucket[j] == 0) {
                    part.push_back(nums[j]);
                    bucket[j]++;
                    dfs(ans, nums, part, bucket, i+1);
                    bucket[j]--;
                    part.pop_back();
                }
            }
        }
    }
};