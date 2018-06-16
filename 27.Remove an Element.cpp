//============================================================================
// Name        : RemoveElement.cpp
// Author      : Akash Pawar
// Version     :
// Copyright   : 
// Description : Remove Element in C++, Ansi-style
//============================================================================

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    sort(nums.begin(),nums.end());
        int count=0;
        int index=0;
        for(int i=0;i<nums.size();++i)
            if(nums[i]==val) {
                count++;
                index=i;
            }

        int startindex=index+1-count;
        cout<<startindex<<endl;
        cout<<count<<endl;
        while(count>0) {
            nums.erase(nums.begin()+startindex);
            count--;
        }
        return nums.size();
    }



};
