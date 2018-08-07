//============================================================================
// Name        : PopulatingNextRightPointersInEachNode.cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */

//Iterative solution//
class Solution {
public:

void connect(TreeLinkNode *root) {

   if(root==NULL)
       return;
    while(root->left){
        TreeLinkNode*p=root;
        while(p){
            p->left->next=p->right;
            if(p->next)
                p->right->next=p->next->left;
            p=p->next;
        }
        root=root->left;
    }
}
};


//Recursive solution//
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if (!root) return;
        if (root -> left) {
            root -> left -> next = root -> right;
            if (root -> next)
                root -> right -> next = root -> next -> left;
        }
        connect(root -> left);
        connect(root -> right);
    }
};
