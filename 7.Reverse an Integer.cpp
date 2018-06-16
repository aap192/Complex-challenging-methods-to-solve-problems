//============================================================================
// Name        : ReverseInteger.cpp
// Author      : Akash Pawar
// Version     :
// Copyright   : 
// Description : Reverse Integer in C++, Ansi-style
//============================================================================

class Solution {
public:
    int reverse(int x) {
        long long res = 0;
        int a=0;
        while(x) {
            a=x%10;
            res = res*10 + a;
            x /= 10;
        }
        return (res<INT_MIN || res>INT_MAX) ? 0 : res;
    }
};
