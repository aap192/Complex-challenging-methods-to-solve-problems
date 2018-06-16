//============================================================================
// Name        : Pow(x,n).cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : Pow(x,n) in C++, Ansi-style
//============================================================================

//RECURSIVE
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
            return 1;
        double t=myPow(x,n/2);
        if(n%2)
            return n<0 ? (1/x)*t*t : x*t*t;
        else
            return t*t;
    }
};


//NON Recursive//
class Solution {
public:
    double myPow(double x, int n) {
    	double ans = 1;
    	unsigned long long p;
    	if (n < 0) {
    		p = -n;
    		x = 1 / x;
    	} else {
    		p = n;
    	}
		while (p) {
			if (p & 1)
				ans *= x;
			x *= x;
			p >>= 1;
		}
		return ans;
    }
};
