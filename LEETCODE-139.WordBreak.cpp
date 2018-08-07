//============================================================================
// Name        : WordBreak.cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : Word Break in C++, Ansi-style
//============================================================================

class Solution {
public:
bool wordBreak(string s, vector<string> &V) {
        unordered_set<string>dict;
    for(string str:V)
        dict.insert(str);
        if(dict.size()==0) return false;

        vector<bool> dp(s.size()+1,false);
        dp[0]=true;

        for(int i=1;i<=s.size();i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(dp[j])
                {
                    string word = s.substr(j,i-j);
                    if(dict.find(word)!= dict.end())
                    {
                        dp[i]=true;
                        break; //next i
                    }
                }
            }
        }

        return dp[s.size()];
    }

};
