class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        if (len == 0) return 0;
        int sum1 = 0, sum2 = len * (len+1) / 2;
        for (int i = 0; i < len; i++)
            sum1 += nums[i];
        return sum2 - sum1;
    }
};