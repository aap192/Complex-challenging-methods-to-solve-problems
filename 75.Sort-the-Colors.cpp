//============================================================================
// Name        : SortColors.cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : Sort Colors in C++, Ansi-style
//============================================================================

class Solution {
public:


    void sortColors(vector<int>& nums) {
        bool swapped;
        do {
            swapped=false;
            for(int i=0;i<nums.size()-1;i++)
                if(nums[i]>nums[i+1]){
                    swap(nums[i],nums[i+1]);
                    swapped=true;
                }

        }
        while(swapped);
    }
};
