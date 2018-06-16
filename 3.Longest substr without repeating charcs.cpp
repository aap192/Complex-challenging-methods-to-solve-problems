//============================================================================
// Name        : LongestSubstringWithoutRepeatingCharacters.cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : Longest Substring Without Repeating Characters in C++, Ansi-style
//============================================================================

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> count(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i< s.length(); i++) {
            if (count[s[i]] > start)
                start = count[s[i]];
            count[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
};
