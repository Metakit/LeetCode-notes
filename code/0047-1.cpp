class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        if (nums.size() == 0) return {{}};
        vector<vector<int>> ans;
        vector<vector<int>> ansUnique;
        vector<int> part;
        int bucket[nums.size()] = {};
        dfs(ans, nums, part, bucket, 0);
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++) {
            if (i == 0 || i != 0 && ans[i] != ans[i-1])
                ansUnique.push_back(ans[i]);
        }
        return ansUnique;
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