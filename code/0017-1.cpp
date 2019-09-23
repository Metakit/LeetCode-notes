class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.size() == 0) return ans;
        string c[10] = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        queue<string> q;
        q.push("");
        for (int i = 0; i < digits.size(); ++i) {
            while(q.front().size() == i){
                string part = q.front();
                q.pop();
                for (int j = 0; j < c[digits[i] - '0'].size(); ++j) {
                    q.push(part + c[digits[i] - '0'][j]);
                }
            }
        }
        while(q.size() != 0) {
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
    }
};