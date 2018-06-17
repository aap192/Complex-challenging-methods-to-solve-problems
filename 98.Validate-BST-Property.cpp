//============================================================================
// Name        : ValidateBinarySearchTree.cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : Validate BST in C++, Ansi-style
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
    bool isValidBST(TreeNode* p) {
      if(p == NULL)
       return true;
   stack<TreeNode*>s;
   TreeNode *n = NULL;
   while (p || !s.empty()) {
      while (p) {
         s.push(p);
         p = p->left;
      }
      p = s.top();
       s.pop();
      if(n && p->val <= n->val)
          return false;
       n=p;
       p=p->right;
   }
   return true;
}
};


