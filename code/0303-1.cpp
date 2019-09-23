class NumArray {
private:
    vector<int> sum;
public:
    NumArray(vector<int> nums) {
        int len = nums.size();
        sum.resize(len);
        for (int i = 0; i < len; i++) {
            if (i == 0) sum[i] = nums[i];
            else        sum[i] = nums[i] + sum[i-1];
        }
    }
    
    int sumRange(int i, int j) {
        int len = sum.size();
        if (i > len || j > len) return 0;
        if (i == 0) return sum[j];
        else        return sum[j] - sum[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */