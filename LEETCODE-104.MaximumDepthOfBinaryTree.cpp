//============================================================================
// Name        : MaximumDepthOfBinaryTree.cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : Maximum Depth Of Binary Tree in C++, Ansi-style
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
    int maxDepth(TreeNode* root) {
        int l=0;
        int r=0;
        TreeNode *p=root;
        if(p==NULL)
            return 0;
        if(p->left==NULL && p->right==NULL)
            return 1;
        l=maxDepth(p->left);
        r=maxDepth(p->right);
        return l>r?l+1:r+1;
    }
};
