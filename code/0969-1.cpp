class Solution {
public:
    vector<int> pancakeSort(vector<int>& A) {
        vector<int> ans;
        stack<int> tmp;
        for (int i = A.size()-1; i >=0; --i) {
            if (A[i] == i+1) continue;
            int mid = 0;
            while (A[mid] != i+1) mid++;
            ans.push_back(mid+1);
            ans.push_back(i+1);
            for (int j = mid + 1; j <= i; j++)    tmp.push(A[j]);
            for (int j = i; j > i - mid - 1; j--) A[j] = A[j - (i - mid)];
            for (int j = 0; j < i - mid; j++)     A[j] = tmp.top(), tmp.pop();
        }
        return ans;
    }
};