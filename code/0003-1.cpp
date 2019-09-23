class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) return 0;
        int bucket[128] = {};
        int ans = 0;
        for (int begin = 0; begin < s.size(); ++begin) {
            int now = 0;
            for (int i = begin; i < s.size(); ++i) {
                if (bucket[s[i]] == 0) bucket[s[i]]++, now++;
                else                   break;
            }
            ans = now>ans ? now : ans;
            memset(bucket, 0, sizeof(bucket));
        }
        return ans;
    }
};