class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<int>> part(s.size(), vector<int>(s.size(), 0));
        vector<vector<string>> ans;
        vector<string> ap;
        int len = s.size();
        /*if      (len == 0) {
            return {{}};
        }
        else if (len == 1) {
            ans.push_back(ap);
            ans[0].push_back(s.substr(0, 1));
            return ans;
        }
        else if (len == 2) {
            ans.push_back(ap);
            ans[0].push_back(s.substr(0, 1));
            ans[0].push_back(s.substr(1, 1));
            if (s[0] == s[1]) ans.push_back(ap), ans[1].push_back(s);
            return ans;
        }
        else*/ {
            check_partition(part, s, 0);
            /*
            for (int i = 0; i < len; i++)
                part[i][i] = 1;
            for (int i = 0; i < len-1; i++)
                if (s[i] == s[i+1])
                    part[i][i+1] = 1;
            for (int i = 2; i < len; i++)
                if (part[i+1][i-1] == 1 && s[0] == )
                    part[i][i] == 1;*/
        }
        print_array(part);
        return ans;
    }
    
    bool check_partition(vector<vector<int>>& arr, string s, int begin) {
        bool result = false;
        int  strLen = s.size();
        if (strLen == 0) return true;
        if (strLen == 1) result = true;
        if (strLen >= 2) {
            if (strLen == 2)
                result = (s[0] == s[1]);
            else if (arr[begin][begin+strLen-1] == 1) 
                result = true;
            else if (arr[begin][begin+strLen-1] == -1) 
                result = false;
            else if (check_partition(arr, s.substr(1, strLen-2), begin+1) == true && s[0] == s[strLen-1])
                result = true;
            check_partition(arr, s.substr(0, strLen-1), begin);
            check_partition(arr, s.substr(1, strLen-1), begin+1);
        }
        arr[begin][begin+strLen-1] = (result == true ? 1 : -1);
        return result;
    }
    
    void find_split_sequence(vector<vector<int>> arr, string s, vector<vector<int>> ans) {
        vector<int> part;
        
    }
    
    void print_array(vector<vector<int>> arr) {
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr[0].size(); j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }
};