class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        int len = A.size();
        sort(A.begin(), A.end(), cmp);
        for (int i = 0; i < len-2; i++) {
            if (A[i] < A[i+1] + A[i+2]) return A[i] + A[i+1] + A[i+2];
        }
        return 0;
    }
    static bool cmp(const int& a, const int& b) {
        return a > b;
    }
};