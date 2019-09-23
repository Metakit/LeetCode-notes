class Solution {
public:
	string longestPalindrome(string s) {
		int len = s.size();
		string ans = "";
		if (len == 0) return ans;
		
		int partLen = 0;
		for (int i = 0; i < len; ++i) {
			for (int j = i; j < len; ++j) {
				string now = s.substr(i, j-i+1);
				if (check(now) && j-i+1 > partLen)
					ans = now, partLen = j-i+1;
			}
		}
		return ans;
	}
	bool check(string part) {
		int len = part.size();
		for (int i = 0; i < len/2; ++i) {
			if (part[i] != part[len-1-i]) return false;
		}
		return true;
	}
};