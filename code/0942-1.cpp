class Solution {
public:
    vector<int> diStringMatch(string S) {
        int len = S.size();
        if (len == 0) return {0};
        
        vector<int> ans;
        int l = 0, h = len;
        for (int i = 0; i < len+1; i++) {
            if (S[i] == 'I') ans.push_back(l), l++;
            else             ans.push_back(h), h--;
        }
        return ans;
    }
};