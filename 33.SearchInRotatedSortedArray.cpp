//============================================================================
// Name        : SearchInRotatedSortedArray.cpp
// Author      : Akash Pawar
// Version     :
// Copyright   : 
// Description : Search In Rotated Sorted Array in C++, Ansi-style
//============================================================================


class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        //
        if(nums.empty()) return -1;
        int size = nums.size();
        int l = 0, r = size-1, m = 0;
        while(l < r)
        {
            m = (l+r)/2;
            if(target == nums[m])
                return m;
            if(nums[m] > nums[r])
            {
                if(nums[m]>target && nums[l]<=target)
                    r = m;
                else
                    l = m+1;
            }
            else if(nums[m] < nums[r])
            {
                if(nums[m]<target && nums[r]>=target)
                    l = m+1;
                else
                    r = m;
            }
        }
        return nums[l]==target? l : -1;
    }
};
