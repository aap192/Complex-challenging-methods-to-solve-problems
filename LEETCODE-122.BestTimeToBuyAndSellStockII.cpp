//============================================================================
// Name        : BestTimeToBuyAndSellStockII.cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : Best Time To Sell And Buy Stock II in C++, Ansi-style
//============================================================================

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP=0;
        if(prices.size()==0)
            return maxP;
        for(int i=0;i<prices.size()-1;i++){
            if((prices[i+1]-prices[i]) > 0)
                maxP=maxP + prices[i+1] - prices[i];
            else
                continue;
        }
        return maxP;
    }
};
