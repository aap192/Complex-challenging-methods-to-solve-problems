//============================================================================
// Name        : BestTimeToBuyAndSellStock.cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : Best time to buy and sell stock in C++, Ansi-style
//============================================================================

class Solution {
public:
    int maxProfit(vector<int>& V) {
        int cmax=0;
        int gmax=0;
        for(int i=1;i<V.size();i++) {
            cmax=max(0,cmax+V[i]-V[i-1]);
            gmax=max(cmax,gmax);
        }
        return gmax;


    }
};
