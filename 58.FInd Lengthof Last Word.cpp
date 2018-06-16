//============================================================================
// Name        : LengthOfLastWord.cpp
// Author      : Akash Pawar
// Version     :
// Copyright   : 
// Description : Length Of Last Word in C++, Ansi-style
//============================================================================

class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        stack<int>S;
        int count=0;
        for(int i=0;i<s.length();++i)
            if(s[i]==' ')
                count++;
        if(count==s.length())
            return 0;
        while(ss>>word){
            S.push(word.length());
        }
        if(s.length()==0)
            return 0;
        else
            return S.top();
    }
};
