//============================================================================
// Name        : MaximumSubarray.cpp
// Author      : Akash Pawar
// Version     :
// Copyright   : 
// Description : Maximum Subarray (Kadane's Algorithm) in C++, Ansi-style
//============================================================================

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currMax=nums[0];
        int gMax=nums[0];
        for(int i=1;i<nums.size();i++){
            currMax=max(nums[i],currMax+nums[i]);
            gMax=max(currMax,gMax);
        }
        return gMax;
    }
};
