//============================================================================
// Name        : AddTwoNumbers.cpp
// Author      : Akash Pawar
// Version     :
// Copyright   : 
// Description : Add Two Numbers in C++, Ansi-style
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
ListNode *addTwoNumbers(ListNode *p, ListNode *q) {
        ListNode *temp = new ListNode(0);
        ListNode *n = temp;
        int sum = 0;
        while(p || q) {
            sum =sum/10;
            if (p) {
                sum += p->val;
                p=p->next;
            }
            if (q) {
                sum += q->val;
                q=q->next;
            }
            n->next = new ListNode(sum % 10);
            n = n->next;
        }
        if (sum / 10 == 1)
            n->next = new ListNode(1);
        return temp->next;
    }
};






