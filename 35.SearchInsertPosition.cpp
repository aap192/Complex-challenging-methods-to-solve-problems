//============================================================================
// Name        : SearchInsertPosition.cpp
// Author      : Akash Pawar
// Version     :
// Copyright   : 
// Description : Search Insert Position in C++, Ansi-style
//============================================================================

class Solution {
public:
   int searchInsert(vector<int>& nums, int target) {
    int start = 0, end = nums.size(), mid;
    while (start < end) {
        mid = (start + end) / 2;
        if (nums[mid] >= target)
            end = mid;
        else
            start = mid + 1;
    }
    return start;
}
};
