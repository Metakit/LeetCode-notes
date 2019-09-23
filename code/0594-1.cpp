class Solution {
public:
    int findLHS(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        if (nums[0] == nums[nums.size()-1]) return 0;
        nums.push_back(0x3f3f3f3f);
        int sum1 = 0, sum2 = 0, maxLen = 0;
        for (int i = 0; i < nums.size()-1; i++) {
            sum2++;
            if (nums[i] != nums[i+1]) {
                if (sum1 != 0) maxLen = sum1+sum2>maxLen ? sum1+sum2 : maxLen;
                if (nums[i+1] - nums[i] == 1) sum1 = sum2;
                else                          sum1 = 0;
                sum2 = 0;
            }
            //cout << sum1 << " " << sum2 << " " << maxLen << endl;
        }
        return maxLen==1 ? 0 : maxLen;
    }
};