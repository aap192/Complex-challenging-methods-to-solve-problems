//============================================================================
// Name        : ValidParentheses.cpp
// Author      : Akash Pawar
// Version     :
// Copyright   : 
// Description : Balanced Parentheses in C++, Ansi-style
//============================================================================

class Solution {
public:
    bool isValid(string s) {
        stack<char>S;
        for(char c: s) {
            if(c=='(' || c=='{' || c=='[')
                S.push(c);

        else {
            if(S.empty()) return false;
            if(S.top()!='(' && c==')') return false;
            if(S.top()!='{' && c=='}') return false;
            if(S.top()!='[' && c==']') return false;
            S.pop();
        }
    }
      return (S.empty());
    }
};



