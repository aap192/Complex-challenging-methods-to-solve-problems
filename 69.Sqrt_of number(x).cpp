//============================================================================
// Name        : Sqrt(x).cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : Sqrt(x) in C++, Ansi-style
//============================================================================

class Solution {
public:
    int mySqrt(int x) {
        if(x<2)
            return x;
        int low=1;
        int high=INT_MAX;
        while(low < high){
            int mid=low+(high-low)/2;
            if(mid > x/mid)
                high=mid-1;
           else if(mid+1 > x/(mid+1))
                return mid;
            else
                low=mid+1;
            }

        return high;
    }
};



