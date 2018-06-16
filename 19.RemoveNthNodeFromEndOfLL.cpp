//============================================================================
// Name        : RemoveNthNodeFromEndOfList.cpp
// Author      : Akash Pawar
// Version     :
// Copyright   : 
// Description : Remove Nth Node From End Of List in C++, Ansi-style
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
    void removeNodeFromStart(ListNode *&head,int pos){
        ListNode *p=head;
        ListNode *n;
        int ctr=1;
        if(pos==1 && p->next==NULL){
            head=NULL;
        }
        else if(pos==1 && p->next){
            head=p->next;
            delete p;
        }
        else if(pos>1){
        while(p && ctr!=pos){
            n=p;
            p=p->next;
            ctr++;
        }
        n->next=p->next;
        delete p;
        }
    }


    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*p=head;
        int ctr=1;
        while(p){
            ctr++;
            p=p->next;
        }
        int pos=ctr-n;
        cout<<pos;
        removeNodeFromStart(head,pos);
        return head;
    }
};
