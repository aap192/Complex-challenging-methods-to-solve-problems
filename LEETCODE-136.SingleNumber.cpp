//============================================================================
// Name        : SingleNumber.cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : Single Number in C++, Ansi-style
//============================================================================

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>count(256,0);
        for(int i=0;i<nums.size();i++)
            count[nums[i]]++;
        for(int i=0;i<nums.size();i++)
            if(count[nums[i]]==1)
                return nums[i];
    }
};
