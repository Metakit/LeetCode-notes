class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        if (len == 0) return 0;
        int p = 0;
        int minI = 0;
        for (int i = 1; i < len; i++) {
            p = max(p, prices[i] - prices[minI]);
            if (prices[i] <= prices[minI]) minI = i;
        }
        return p;
    }
};