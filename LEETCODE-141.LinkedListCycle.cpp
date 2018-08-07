//============================================================================
// Name        : LinkedListCycle.cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : Linked List Cycle in C++, Ansi-style
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
    bool hasCycle(ListNode *head) {
        if(head==NULL)
            return false;
        ListNode *p=head;
        ListNode *n=head->next;

        while(p && n && n->next) {
            p=p->next;
            n=n->next->next;
            if(p==n)
                return true;
        }
        return false;
    }
};
