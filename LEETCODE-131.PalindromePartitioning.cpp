//============================================================================
// Name        : PalindromePartitioning.cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : Palindrome Partitioning in C++, Ansi-style
//============================================================================

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> tmp;
        getPartition(s, 0, tmp, res);
        return res;
    }
private:
    void getPartition(string& s, int idx, vector<string>& tmp, vector<vector<string>>& res) {
        if (idx == s.length()) {
            res.push_back(tmp);
            return;
        }
        for (int i = idx, n = s.length(); i < n; i++) {
            int l = idx, r = i;
            while (l < r && s[l] == s[r]) l++, r--;
            if (l >= r) {
                tmp.push_back(s.substr(idx, i - idx + 1));
                getPartition(s, i + 1, tmp, res);
                tmp.pop_back();
            }
        }
    }
};
