//============================================================================
// Name        : RomanToInteger.cpp
// Author      : Akash Pawar
// Version     :
// Copyright   : 
// Description : Roman To Integer in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Solution {
public:

    int romanToInt(string s) {
        unordered_map<char,int>T = {
                                     { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 }
                                    };
        int sum=T[s[s.length()-1]];
        for(int i=0;i<s.length()-1;i++){
            if(T[s[i]] < T[s[i+1]])
                sum-=T[s[i]];
            else
                sum+=T[s[i]];
        }
        return sum;

    }
};


