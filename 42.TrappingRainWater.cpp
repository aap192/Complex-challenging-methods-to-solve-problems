//============================================================================
// Name        : TrappingRainWater.cpp
// Author      : Akash Pawar
// Version     :
// Copyright   : 
// Description : Trapping Rain Water in C++, Ansi-style
//============================================================================

class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size();
        if(n==0)
            return 0;

        int sum=h[0];
        int maxh=h[0];
        for(int i=1;i<n;i++){
            sum+=h[i];
            maxh=max(h[i],maxh);
        }

        int left=0;
        int cmax=h[0];
        for(int i=1;i<n;i++){
            if(h[i-1]>cmax)
                cmax=h[i-1];
            if(h[i]>cmax)
                left+=(h[i]-cmax) * i;
        }

        int right=0;
        cmax=h[n-1];
        for(int i=n-2;i>=0;i--){
            if(h[i+1]>cmax)
                cmax=h[i+1];
            if(h[i]>cmax)
                right+=(h[i]-cmax) * (n-i-1);
        }

        return maxh*n - sum - left - right;

    }
};
