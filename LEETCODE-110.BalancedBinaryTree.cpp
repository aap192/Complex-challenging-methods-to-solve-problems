//============================================================================
// Name        : BalancedBinaryTree.cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : Balanced Binary Tree in C++, Ansi-style
//============================================================================

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int height(TreeNode *p){
        int l=0;
        int r=0;
        if(p==NULL)
            return 0;
        l=height(p->left);
        r=height(p->right);
        return (l>r?l+1:r+1);
    }
    bool isBalanced(TreeNode* root) {
        TreeNode *p=root;
        if(p==NULL)
            return true;
        return (isBalanced(p->left) && isBalanced(p->right) && (abs(height(p->left)-height(p->right))<=1));
    }
};
