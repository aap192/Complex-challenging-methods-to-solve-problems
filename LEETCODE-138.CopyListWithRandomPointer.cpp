//============================================================================
// Name        : CopyListWithRandomPointer.cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : CopyListWithRandomPointer in C++, Ansi-style
//============================================================================

class Solution {
public:
    unordered_map<RandomListNode*, RandomListNode*>mp;
    RandomListNode *copyRandomList(RandomListNode *head)
    {
        if(!head) return NULL;
        if(mp[head]!=NULL) return mp[head];
        mp[head] = new RandomListNode(head->label);
        mp[head] -> next = copyRandomList(head->next);
        mp[head] -> random = copyRandomList(head->random);
        return mp[head];
    }
};
