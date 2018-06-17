//============================================================================
// Name        : BinaryTreeLevelOrderTraversal.cpp
// Author      : Akash Pawar
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

//VECTOR OF VECTORS//


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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
       if(root==NULL)
           return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>V;
            int size=q.size();
            for(int i=0;i<size;i++){
                V.push_back(q.front()->val);
                if(q.front()->left)
                    q.push(q.front()->left);
                if(q.front()->right)
                    q.push(q.front()->right);
                q.pop();
            }
            res.push_back(V);
        }
        return res;

    }
};

//ONE VECTOR ONLY//


/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node * root) {
  queue <node*>q;
    q.push(root);
    while(!q.empty()){
        if(root->left)
            q.push(root->left);
        if(root->right)
            q.push(root->right);
        cout<<q.front()->data<<" ";
        q.pop();
        root=q.front();
    }

}

