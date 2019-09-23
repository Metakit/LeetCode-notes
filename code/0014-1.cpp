class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int len = strs.size();
        if (len == 0) return ans;
        
        char same = ' ';
        bool end = false;
        for (int i = 0; ; ++i) {
            if (i >= strs[0].size()) break;
            else                     same = strs[0][i];
            
            for (int j = 1; j < len; ++j) {
                if (i >= strs[j].size() || strs[j][i] != same) {
                    end = true;
                    break;
                }
            }
            if (end) break;
            ans.push_back(same);
        }
        
        return ans;
    }
};