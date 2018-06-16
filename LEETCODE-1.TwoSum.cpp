//============================================================================
// Name        : TwoSum.cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : Two Sum in C++, Ansi-style
//============================================================================

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set<int>S;
        vector<int>V;
        int first=0;
        for(int i=0;i<nums.size();i++){
            if(S.find(nums[i])!=S.end()){
                V.push_back(i);
                first=nums[i];
                break;
            }
            else
                S.insert(target-nums[i]);
        }
        for(int i=0;i<nums.size();i++)
            if(nums[i]==(target-first))
            {
                V.push_back(i);
                break;
    }
        
        return V;
    
               }
               
};
