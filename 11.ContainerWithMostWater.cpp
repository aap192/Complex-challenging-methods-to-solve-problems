//============================================================================
// Name        : ContainerWithMostWater.cpp
// Author      : Akash Pawar
// Version     :
// Copyright   : 
// Description : Container With Most Water in C++, Ansi-style
//============================================================================

class Solution {
public:
    int maxArea(vector<int>& height) {
        
    int water = 0;
    int l = 0;
    int r = height.size() - 1;
    while (l < r) {
        int minH = min(height[l], height[r]);
        water = max(water, (r - l) * minH);
        if(height[l]<=height[r])
            l++;
       else
            r--;
    }
    return water;
}
};

