//============================================================================
// Name        : BinaryTreeZigzagLevelOrderTraversal.cpp
// Author      : Akash Pawar
// Version     :
// Copyright   : 
// Description : Binary Tree Zigzag Level Order Traversal in C++, Ansi-style
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

//Vector of vectors//
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* p) {
        vector<vector<int>>ans;
        if(p==NULL)
            return ans;
        queue<TreeNode*>q;
        q.push(p);
        int level=1;
        while(!q.empty()){
            int size=q.size();
            vector<int>V;
            for(int i=0;i<size;i++){
                if(level==1)
                    V.push_back(q.front()->val);
                else
                    V.insert(V.begin(),q.front()->val);
                if(q.front()->left)
                    q.push(q.front()->left);
                if(q.front()->right)
                    q.push(q.front()->right);
                q.pop();

            }
            level=-level;
            ans.push_back(V);
        }
        return ans;
        
        
        //Just vector/display
    
    void printZigzagorder(TreeNode *p) const {
	queue<TreeNode*>q;
	q.push(p);
	int level=1;
	vector<int>V;
	while(!q.empty()){
		if(p->left)
			q.push(p->left);
		if(p->right)
			q.push(p->right);
		if(level==1)
			V.push_back(q.front()->value);
		else
			V.insert(V.begin(),q.front()->value);
		q.pop();
		level=-level;
		p=q.front();

	}

	for(auto i=V.begin();i!=V.end();i++)
		cout<<*i<<" ";

}


    }
};
