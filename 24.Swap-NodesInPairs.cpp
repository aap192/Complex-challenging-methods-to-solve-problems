//============================================================================
// Name        : SwapNodesInPairs.cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : Swap Nodes In Pairs in C++, Ansi-style
//============================================================================

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *p=head;
        if(p == NULL)
            return NULL;
        if(p->next == NULL)
            return head;

        ListNode* n = p->next;
        p->next = swapPairs(n->next);
        n->next = p;

        return n;
    }
};
