//============================================================================
// Name        : Subsets.cpp
// Author      : Akash Pawar
// Version     :
// Copyright   : 
// Description : Subsets in C++, Ansi-style
//============================================================================

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
      sort(nums.begin(), nums.end());
        vector<vector<int>>ans(1,vector<int>());
        for (int i = 0; i < nums.size(); i++) {
            int n = ans.size();
            for (int j = 0; j < n; j++) {
                ans.push_back(ans[j]);
                ans.back().push_back(nums[i]);
            }
        }
        return ans;
    }
};


