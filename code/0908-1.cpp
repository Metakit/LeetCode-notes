class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int ma = A[0], mi = A[0];
        for (int i = 0; i < A.size(); i++) {
            if (A[i] > ma) ma = A[i];
            if (A[i] < mi) mi = A[i];
        }
        return ma-mi>2*K ? ma-mi-2*K : 0;
    }
};