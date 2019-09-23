class Solution {
public:
    string convert(string s, int numRows) {
        string ans = "";
        if (s.size() == 0) return ans;
        if (numRows <= 1) return s;
        for (int i = 0; i < s.size(); i += numRows*2-2)
            ans.push_back(s[i]);
        for (int i = numRows-2; i > 0; --i) {
            for (int j = numRows-1; j < s.size()+numRows; j += numRows*2-2) {
                if (j-i < s.size()) ans.push_back(s[j-i]);
                if (j+i < s.size()) ans.push_back(s[j+i]);
            }
        }    
        for (int i = numRows-1; i < s.size(); i += numRows*2-2)
            ans.push_back(s[i]);
        return ans;
    }
};