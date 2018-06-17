//============================================================================
// Name        : BinaryTreeInorderTraversal.cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : Binary Tree Inorder Traversal in C++, Ansi-style
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

//Iterative//

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* p) {
        vector<int>V;
        if(p==NULL)
            return V;
        stack<TreeNode*>s;
        while(p || !s.empty()){
            while(p){
                s.push(p);
                p=p->left;
            }
            p=s.top();
            s.pop();
            V.push_back(p->val);
            p=p->right;
        }
        return V;
    }
};


//Recursive//
class Solution {
public:
   vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root==NULL)
            return res;
        vector<int> left = inorderTraversal(root->left);
        vector<int> right = inorderTraversal(root->right);
        res.insert(res.end(), left.begin(), left.end());
        res.push_back(root->val);
        res.insert(res.end(),right.begin(),right.end());
        return res;
    }
};
