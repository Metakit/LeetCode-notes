class Solution {
public:
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		vector<vector<int>> ans;
		vector<vector<int>> remove_duplicates_ans;
		vector<int> part;
		if (candidates.size() == 0) return ans;

		sort(candidates.begin(), candidates.end());
		dfs(ans, candidates, part, target, 0, 0);
		sort(ans.begin(), ans.end());
		for (int i = 0; i < ans.size(); i++) {
			if (i != 0 && ans[i] == ans[i-1] );
			else remove_duplicates_ans.push_back(ans[i]);
		}
		return remove_duplicates_ans;
	}
	void dfs(vector<vector<int>>& ans, vector<int>& c, 
		vector<int> part, int t, int sum, int i) {
		if (sum == t) {
			ans.push_back(part);
		}
		else if (sum < t && i < c.size()) {
			dfs(ans, c, part, t, sum, i+1);
			part.push_back(c[i]);
            dfs(ans, c, part, t, sum+c[i], i);
			dfs(ans, c, part, t, sum+c[i], i+1);
		}
		else;
	}
};