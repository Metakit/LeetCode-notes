class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        for (int s = 0; s < strs.size(); s++) {
            for (int i = 0; i <= ans.size(); i++) {
                if (i == ans.size()) {
                    vector<string> part;
                    part.push_back(strs[s]);
                    ans.push_back(part);
                    break;
                }
                else if (cmp(strs[s], ans[i][0])) {
                    ans[i].push_back(strs[s]);
                    break;
                }
                else;
            }
        }
        return ans;
    }
    bool cmp(string a, string b) {
        int bucket[26] = {};
        if (a.size() == b.size()) {
            for (int i = 0; i < a.size(); i++) {
                bucket[a[i] - 'a']++;
                bucket[b[i] - 'a']--;
            }
            for (int i = 0; i < 26; i++) {
                if (bucket[i] != 0) return false;
            }
            return true;
        }
        return false;
    }
};